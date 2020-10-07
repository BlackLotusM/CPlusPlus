// Opdracht5.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include "Bibliotheek.h"
#include "Boek.h"

int main()
{
    Bibliotheek* biep = new Bibliotheek();
    Boek* boekie = new Boek();
    boekie->uitGeleend = false;

    biep->leenUit(boekie); //leent het boek uit
    std::cout << "\n";
    biep->leverIn(boekie); //levert het boek in
    std::cout << "\n";
    delete boekie;
    delete biep;
    system("pause");
}

