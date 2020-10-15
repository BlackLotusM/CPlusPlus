#include <iostream>
#include "ReverseText.h"
#include <string>
#include <fstream>
#include <streambuf>
#include <ctime>

int main() {
	ReverseText reverser = ReverseText();

	std::ifstream t("../FileToRead.txt");
	if (!t) {
		std::cout << "File not found" << std::endl;
		return 404;
	}

	std::string str((std::istreambuf_iterator<char>(t)),
		std::istreambuf_iterator<char>());

	std::string greeting = str;
	
	reverser.reverse_String(greeting, greeting.length() - 1, 0);

	std::cout << "String after reversal: " << greeting << std::endl;
	std::cout << "The file is stored in the projectfolder with the name 'FileToWrite'" << std::endl;

	//File To Write to, if it doesnt exit it will make the file.
	std::ofstream outfile("../FileToWrite.txt");
	outfile << greeting << std::endl;
	outfile.close();
}