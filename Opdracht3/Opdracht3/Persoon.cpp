#include "Persoon.h"

int Persoon::getAge()
{
    return leeftijd;
}

std::string Persoon::getName()
{
    return std::string(naam);
}

Persoon::Persoon(int _leeftijd, std::string _naam)
{
    leeftijd = _leeftijd;
    naam = _naam;
}
