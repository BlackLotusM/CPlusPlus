#include<iostream>
#include "CoffeeMachine.h"

void CoffeeMachine::takeCoin(Coin _coin)
{

	checkAmount = _coin.getAmount();
	std::cout << "You can buy: \n";
	if (checkAmount <= 0.50) {
		std::cout << "Basic Koffie\n";
	}
	else if(checkAmount <= 1){
		std::cout << "Basic Koffie\n";
		std::cout << "Bonen Koffie\n";
	}
	else if(checkAmount == 999) {
		std::cout << "Basic Koffie\n";
		std::cout << "Bonen Koffie\n";
		std::cout << "Cappuchino\n";
	}
	std::cout << "With: " << checkAmount << " Euro \n\n";
	
}
