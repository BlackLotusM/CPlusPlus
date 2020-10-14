#pragma once
#include "Sokken.h"
class Koffer
{
    public:
        Koffer(); // constructor (ctor)
        Koffer(std::string _kleur);
        Koffer(const Koffer& anderBroodmandje); // copy constructor (cctor)
        Koffer& operator=(const Koffer& anderMandje); // assignment operator
        virtual ~Koffer(); // destructor (dtor)
        void veranderKleur(std::string _kleur);

        void vulKoffer(Sokken& sok);
        void toonInhoud();

        std::string kleur = "Grijs";;

    private:
        Sokken sokken;
        
};

