#pragma once
#include "Student.h"
#include <string>
class Groep
{
	public:
		
		char naamKlas;
		char lokaal;
		char opmerking;
		Student students[];

		void getNameKlas();
		void addStudentToClass(Student stud, std::string klas);
};

