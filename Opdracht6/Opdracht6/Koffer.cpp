#include <iostream>
#include "Koffer.h"

Koffer::Koffer() {

}

Koffer::Koffer(std::string _kleur)
{
    this->kleur = _kleur;
}

Koffer::~Koffer() {

}

Koffer::Koffer(const Koffer& anderBroodmandje) {
    if (this == &anderBroodmandje) return; // self-check: kijk of we niet onszelf aan 't overschrijven zijn
    sokken = Sokken(anderBroodmandje.sokken.kleur); // roep een constructor aan
}

void Koffer::veranderKleur(std::string _kleur)
{
    if (_kleur == "") {
        kleur = "Grijs";
    }
    else {
        this->kleur = _kleur;
    }
}

Koffer& Koffer::operator=(const Koffer& anderMandje) {
    this->kleur = anderMandje.kleur;
    return *this;
}

void Koffer::toonInhoud() {
    std::cout << "De kleur van de koffer is: '" << kleur << "'" << std::endl;
    std::cout << "De koffer bevat sokken met de kleur: '" << sokken.kleur << "'" << std::endl;
}

void Koffer::vulKoffer(Sokken& sok) {
    sokken = sok;
}
