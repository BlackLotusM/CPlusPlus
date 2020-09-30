#pragma once
#include "Persoon.h"
class Docent :
    public Persoon
{
private:
    int salaris;
public:
    Docent(int _salaris, int _leeftijd, std::string _naam);
    int getSalaris();
};

