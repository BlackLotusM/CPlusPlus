#include <iostream>
#include "Sokken.h"

Sokken::Sokken() {
    
}

Sokken::Sokken(std::string _kleur) {
    this->kleur = _kleur;
}

void Sokken::veranderKleur(std::string _kleur)
{
    if (_kleur == "") {
        kleur = "Grijs";
    }
    else {
        this->kleur = _kleur;
    }
}

Sokken::~Sokken() {
    
}

Sokken& Sokken::operator=(const Sokken& anderBroodje) {
    this->kleur = anderBroodje.kleur;
    return *this;
}
