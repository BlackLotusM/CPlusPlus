#include "Bibliotheek.h"
#include <iostream>

void Bibliotheek::leenUit(Boek* boek)
{
	if (boek->uitGeleend == true) {
		std::cout << "het boek is al uitgeleend";
	}
	else {
		std::cout << "het boek wordt nu uitgeleend";
		boek->uitGeleend = true;
	}
}

void Bibliotheek::leverIn(Boek* boek)
{
	if (boek->uitGeleend == true) {
		std::cout << "het boek is nu weer ingeleverd";
		boek->uitGeleend = false;
	}
	else {
		std::cout << "het boek is niet uitgeleend geweest.";	
	}
}
