#include "SentenceMerger.h"
#include <iostream>
#include <fstream>
#include <string>


bool SentenceMerger::more(std::ifstream& ifs, std::string& s) {
	if (ifs.peek() < 0) {
		return false;
	}
	else {
		s = ifs.peek();
		return true;
	}
}

void SentenceMerger::run(std::ifstream& ifs1, std::string& s1, std::ifstream& ifs2, std::string& s2) {
	std::ofstream ofs;
	ofs.open("../Files/merged.txt");
	
	//Loops through the 2 files
	while (more(ifs1, s1) && more(ifs2, s2)) {

		getline(ifs1, s1), '.';
		getline(ifs2, s2), '.';
		ofs << s1 << std::endl;
		ofs << s2 << std::endl;
	}

	//Still loops through if data is left in file 1
	while (more(ifs1, s1)) {
		getline(ifs1, s1), '.';
		ofs << s1 << std::endl;
	}

	//Still loops through if data is left in file 2
	while (more(ifs2, s2)) {
		getline(ifs2, s2), '.';
		ofs << s2 << std::endl;
	}
	ofs.close();
}