#pragma once

#include <map>
#include <string>
#include <vector>
#include "../NoteFrequencyTable/FrequencyTable.h"
#include <utility>

using namespace std;

class Encryption
{
public:
    Encryption(string textToEncrypt, FrequencyTable & frequencyTable);
    std::vector<double> encrypt();

private:
	string m_textToEncrypt;
    FrequencyTable m_frequencyTable;

    // returns the place of a character within alphabet list. point (.) is 27th
    int charToInt(char input);
    std::vector<char> parse(string textToParse);
    std::pair<FrequencyTable::Notes, int> getNoteAndOctave(int index);
};
