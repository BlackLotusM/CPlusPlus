#pragma once

class Module
{
	public: 
		char naamModule;
		int ec;
		char docent;

		Module(char NaameModule, int Ec, char Docent);
		void addModule();
		void changeModule();
		void getModule();
};

