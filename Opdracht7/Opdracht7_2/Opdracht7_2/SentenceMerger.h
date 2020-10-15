#pragma once
#include <string>
class SentenceMerger
{
public:
	void run(std::ifstream& ifs1, std::string& s1, std::ifstream& ifs2, std::string& s2);
	bool more(std::ifstream& ifs, std::string& s);
};

