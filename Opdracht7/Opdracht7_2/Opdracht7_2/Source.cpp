#include <iostream>
#include <fstream>
#include <string>
#include "SentenceMerger.h"

int main() {
	std::ifstream ifs1("../Files/sentences1.txt");
	std::ifstream ifs2("../Files/sentences2.txt");

	std::string s1, s2 = "";
	
	SentenceMerger sm = SentenceMerger();
	sm.run(ifs1, s1, ifs2, s2);
	
	std::cout << "Het merge file is opgeslagen in het project folder in de map 'Files' met de naam merged.txt" << std::endl;
	system("pause");
}