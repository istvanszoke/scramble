#include "Scramble.h"


void Scramble::processInput(const std::string& in)
{
    std::istringstream stream(in);
    std::string temp;
    while (stream >> temp)
    {
        words.push_back(temp);
    }
}

void Scramble::scrambleWords()
{
    for (auto &word : words)
    {
        int len = word.size();
        int wordlen = 0;
        bool spec = (word[len - 1] == '.' || word[len - 1] == '?' || word[len - 1] == '!' || word[len - 1] == ',');
        if (spec)
            wordlen = len - 1;
        else
            wordlen = len;

        std::string temp = word;
        for (int i = wordlen - 2; i >= 1; --i)
        {
            temp[(wordlen - 2) - i + 1] = word[i];
        }
        if (spec)
            temp[len - 1] = word[len - 1];
        word = temp;
    }
}

void Scramble::fillOutput()
{
    std::ostringstream o_stream;

    for (auto &word : words)
    {
        o_stream << word;
		if (word != words.back())
	        o_stream.put(' ');
    }

    out = o_stream.str();
}

std::string Scramble::scramble(std::string in)
{
    processInput(in);
    scrambleWords();
    fillOutput();

    return getOutput();
}



