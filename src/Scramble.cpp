#include <Scramble.hpp>


void Scramble::processInput(std::string in)
{
    std::istringstream stream = std::istringstream(in);
    string temp;
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
        if (spec = (word[len-1] == '.' || word[len-1] == '?' || word[len-1] == '!'))
            wordlen = len-1;
        else
            wordlen = len;

        string temp = word;
        temp[0] = word[wordlen-1];
        temp[wordlen-1] = word[0]
        for (int i = len-2; i >= 1; --i)
        {
            temp[(wordlen-2)-i+1] = word[i];
        }
        if (spec)
            temp[len-1] = word[len-1];
        word = temp;
    }
}

void Scramble::fillOutput()
{
    ostringstream o_stream = ostringstream();
        
    for (auto word : words)
    {
        o_stream << word;
        o_stream.put(' ');
    }   
}
