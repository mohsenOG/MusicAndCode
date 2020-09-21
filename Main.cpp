#include <Windows.h>
#include <iostream>

#include "NoteFrequencyTable/FrequencyTable.h"


int main()
{
	int octave = 8;

	// Symphony 9
    FrequencyTable &table = FrequencyTable::Instance();
    auto freq = table.getFrequency(FrequencyTable::Note_E, octave);
    Beep((int)freq, 500);
    Beep((int)freq, 500);
    freq = table.getFrequency(FrequencyTable::Note_F, octave);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_G, octave);
    Beep((int)freq, 500);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_F, octave);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_E, octave);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_D, octave);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_C, octave);
    Beep((int)freq, 500);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_D, octave);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_E, octave);
    Beep((int)freq, 500);
    Beep((int)freq, 500);

    freq = table.getFrequency(FrequencyTable::Note_D, octave);
    Beep((int)freq, 250);
    Beep((int)freq, 250);

	std::cout << "Ended" << std::endl;
	return 0;
}
