#include "Encryption.h"
#include <cctype>

Encryption::Encryption(string textToEncrypt, FrequencyTable &frequencyTable) :
    m_textToEncrypt(textToEncrypt),
    m_frequencyTable(frequencyTable)
{
}

int Encryption::charToInt(char input)
{
    return ::toupper(input) - 64;
}

vector<char> Encryption::parse(string textToParse)
{
    vector<char>parsedText;
    parsedText.reserve(textToParse.length());
    for (char& c : textToParse)
        parsedText.push_back(c);
    return parsedText;
}

vector<double> Encryption::encrypt()
{
    vector<double> noteFrequencies;
    noteFrequencies.reserve(m_textToEncrypt.size());

    for (auto c : m_textToEncrypt)
    {
        int index = charToInt(c);
        auto noteAndOctave = getNoteAndOctave(index);
        double freq = m_frequencyTable.getFrequency(noteAndOctave.first, noteAndOctave.second);
        noteFrequencies.push_back(freq);
    }
    return noteFrequencies;
}

pair<FrequencyTable::Notes, int> Encryption::getNoteAndOctave(int index)
{
    return pair<FrequencyTable::Notes, int> ();
}



