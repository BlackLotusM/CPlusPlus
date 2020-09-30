#pragma once
#include "Persoon.h"
class Student :
    public Persoon
{
private:
    int studentenummer;
public:
    Student(int _studentennummer, int _leeftijd, std::string _naam);
    int getStudentennummer();
};

