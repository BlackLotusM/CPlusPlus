#pragma once


class Sokken {
public:
    Sokken();
    Sokken(std::string _kleur);

    void veranderKleur(std::string _kleur);
    virtual ~Sokken();
    Sokken& operator=(const Sokken& anderSok);

    std::string kleur = "Grijs";
};

