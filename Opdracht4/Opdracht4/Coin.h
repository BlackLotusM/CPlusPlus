#pragma once
#include <string>
class Coin
{
public:
    float getAmount();
    std::string getName();

    Coin(float _amount, std::string _naam);

private:
    float amount;
    std::string naam;
};

