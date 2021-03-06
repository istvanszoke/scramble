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
    void processInput(const std::string& in);
    void scrambleWords();
    void fillOutput();
    void clear() { words.clear(); }
    std::string scramble(std::string);
    std::string getOutput(){ return out; }
    std::vector<std::string> getWords() { return words; }

};
