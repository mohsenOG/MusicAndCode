#include "FrequencyTable.h"
#include <cmath>

double FrequencyTable::getFrequency(const Notes note, int octave) const
{
	double frequency = .0;
	switch (note)
	{
	case Note_A:
		frequency = noteA * std::pow(2, octave);
		break;
	case Note_A_Sharp:
	case Note_B_Flat:
		frequency = noteASharp * std::pow(2, octave);;
		break;
	case Note_B:
		frequency = noteB * std::pow(2, octave);;
		break;
	case Note_C:
		frequency = noteC * std::pow(2, octave);;
		break;
	case Note_C_Sharp:
	case Note_D_Flat:
		frequency = noteCSharp * std::pow(2, octave);;
		break;
	case Note_D:
		frequency = noteD * std::pow(2, octave);;
		break;
	case Note_D_Sharp:
	case Note_E_Flat:
		frequency = noteDSharp * std::pow(2, octave);;
		break;
	case Note_E:
		frequency = noteE * std::pow(2, octave);;
		break;
	case Note_F:
		frequency = noteF * std::pow(2, octave);;
		break;
	case Note_F_Sharp:
	case Note_G_Flat:
		frequency = noteFSharp * std::pow(2, octave);;
		break;
	case Note_G:
		frequency = noteG * std::pow(2, octave);;
		break;
	case Note_G_Sharp:
	case Note_A_Flat:
		frequency = NoteGSharp * std::pow(2, octave);;
		break;
	default:
		break;
	}
	return frequency;
}