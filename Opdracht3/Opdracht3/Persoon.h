#pragma once
#include <string>
class Persoon
{
private:
	int leeftijd;
	std::string naam;

public:
	int getAge();
	std::string getName();
	Persoon(int _leeftijd, std::string _naam);
};

