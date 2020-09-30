#include "Les.h"

Les::Les(char DatumEnTijd, char Lokaal, char Groep, char Module, char Opmerking)
{
	moduleNaam = Module;
	datumEnTijd = DatumEnTijd;
	lokaal = Lokaal;
	groep = Groep;
	opmerking = Opmerking;
}

void Les::planLes()
{
	//Registreert de les in een database
}
