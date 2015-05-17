#include "Scramble.h"


void Scramble::processInput(std::string in)
{
    std::istringstream stream = std::istringstream(in);
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
        bool spec = false;
        if (spec = (word[len - 1] == '.' || word[len - 1] == '?' || word[len - 1] == '!' || word[len - 1] == ','))
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
    std::ostringstream o_stream = std::ostringstream();

    for (auto word : words)
    {
        o_stream << word;
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

int main(int argc, const char** argv[])
{
    Scramble s = Scramble();

    s.processInput("Scramble these words!");
    s.scrambleWords();
    s.fillOutput();

    std::cout << s.getOutput() << std::endl;
    int a;
    std::cin >> a;
}

