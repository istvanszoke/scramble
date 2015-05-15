#include <iostream>
#include <sstream>
#include <string>
#include <vector>

class Scramble
{
    std::vector<std::string> words = std::vector<std::string>();
    std::string out;

public:
    Scramble() : words(std::vector<std::string>()), out("") {}
    void processInput(std::string in);
    void scrambleWords();
    void fillOutput();
    std::string getOutput(){ return out; }

};