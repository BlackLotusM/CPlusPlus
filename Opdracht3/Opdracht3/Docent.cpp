#include "Docent.h"
#include "Persoon.h"

Docent::Docent(int _salaris, int _leeftijd, std::string _naam) : Persoon(_leeftijd, _naam)
{
    salaris = _salaris;
}

int Docent::getSalaris()
{
    return salaris;
}
