#pragma once

#include <string>
#include "Caravan.h"
#include "Koffer.h"

class Caravan {
public:
	void inhoudCaravan();
	std::string kleur = "Grijs";
	void veranderKleur(std::string _kleur);
	std::string getKleur();

	void vulCaravan(Koffer* kof);
private:
	Koffer* koffer;
};
