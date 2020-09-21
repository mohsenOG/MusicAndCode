#pragma once

#include<map>

class FrequencyTable {
public:
    FrequencyTable() {}

    enum Notes {
        Note_A = 0,
        Note_A_Sharp,
        Note_A_Flat,
        Note_B,
        Note_B_Flat,
        Note_C,
        Note_C_Sharp,
        Note_D,
        Note_D_Sharp,
        Note_D_Flat,
        Note_E,
        Note_E_Flat,
        Note_F,
        Note_F_Sharp,
        Note_G,
        Note_G_Sharp,
        Note_G_Flat,
    };

	double getFrequency(const Notes note, int octave) const;

private:
	const double noteA{ 55. };
	const double noteASharp{ 58.27 };

	const double noteB{ 61.74 };
	
	const double noteC{ 32.70 };
	const double noteCSharp{ 34.65 };

	const double noteD{ 36.71 };
	const double noteDSharp{ 38.89 };

	const double noteE{ 41.20 };

	const double noteF{ 43.65 };
	const double noteFSharp{ 46.25 };

	const double noteG{ 49. };
	const double NoteGSharp{ 51.91 };
};
