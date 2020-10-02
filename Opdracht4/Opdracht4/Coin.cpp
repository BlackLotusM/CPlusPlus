#include "Coin.h"
#include "CoffeeMachine.h"

Coin::Coin(float _amount, std::string _naam)
{
	amount = _amount;
	naam = _naam;
}

float Coin::getAmount()
{
    return amount;
}

std::string Coin::getName()
{
    return std::string(naam);
}