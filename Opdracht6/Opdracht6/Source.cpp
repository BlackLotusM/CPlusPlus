#include <iostream>
#include "Caravan.h"
#include "Koffer.h"
#include "Sokken.h"

int main() {
    {
        Caravan caravan;
        Caravan gestolen;
        Koffer* koffer = new Koffer();
        Sokken sok;

        //Dit zet de kleuren neer! als je geen kleur neer zet dan is het grijs
        //Als je geen string invoert is het ook automatische grijs!
        sok.veranderKleur("Groen");
        koffer->veranderKleur("Rood");
        caravan.veranderKleur("Blauw");

        koffer->vulKoffer(sok);
        caravan.vulCaravan(koffer);

        caravan.inhoudCaravan();

        std::cout << std::endl << "dat is pech caravan weg. Hier wordt die gestolen" << std::endl;
        gestolen = caravan;
        gestolen.inhoudCaravan();
    }
    return 0;
}
