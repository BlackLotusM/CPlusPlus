#include <iostream>

#include "Coin1e.h"
#include "Coin50c.h"
#include "CoinCoffee.h"

#include "CoffeeMachine.h"

int main()
{
	CoffeeMachine machine = CoffeeMachine();

	Coin1e c = Coin1e(0.5, "50Cent");
	Coin50c e = Coin50c(1, "Euro");
	CoinCoffee x = CoinCoffee(999, "Special");

	machine.takeCoin(c);
	machine.takeCoin(e);
	machine.takeCoin(x);
	system("pause");
}
