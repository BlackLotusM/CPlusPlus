#include<iostream>
#include "CoffeeMachine.h"

void CoffeeMachine::takeCoin(Coin _coin)
{

	checkAmount = _coin.getAmount();
	if (_coin.getName() == "Special") {
		std::cout << "You can buy: \n";
		std::cout << "Basic Koffie\n";
		std::cout << "Bonen Koffie\n";
		std::cout << "Cappuchino\n";
		std::cout << "With the special coin\n";
	}
	else {
		std::cout << "You can buy: \n";
		if (checkAmount <= 0.50) {
			std::cout << "Basic Koffie\n";
		}
		else if (checkAmount <= 1) {
			std::cout << "Basic Koffie\n";
			std::cout << "Bonen Koffie\n";
		}
		
		std::cout << "With: " << checkAmount << " Euro \n\n";
	}
	
}
