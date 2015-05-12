#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Scramble
{
    std::vector<string> words = std::vector<string>();
    std::string out;

public:
    Scramble() : words(std::vector<strin>()), out("") {}
    processInput(std::string in);
    scrambleWords();
    fillOutput();
};
