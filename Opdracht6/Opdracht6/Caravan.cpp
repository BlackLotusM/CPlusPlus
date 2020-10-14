#include <iostream>
#include "Caravan.h"


void Caravan::inhoudCaravan()
{
	koffer->toonInhoud();
	std::cout << "De kleur van de caravan is: '" << this->getKleur() << "'" << std::endl;
}

void Caravan::veranderKleur(std::string _kleur)
{
	if (_kleur == "") {
		kleur = "Grijs";
	}
	else {
		this->kleur = _kleur;
	}
}

std::string Caravan::getKleur()
{
	return kleur;
}

void Caravan::vulCaravan(Koffer* kof)
{
	koffer = kof;
}
