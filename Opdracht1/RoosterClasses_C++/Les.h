#pragma once
#include <ctime>
#include <string>

class Les
{
	public:
		std::string groep = "";
		std::string moduleNaam;
		std::string lokaal;
		std::time_t datumEnTijd;
		std::string opmerking;

		Les(char DatumEnTijd, char Lokaal, char Groep, char Module, char Opmerking);
		void planLes();
};

