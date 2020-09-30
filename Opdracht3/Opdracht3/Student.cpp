#include "Student.h"
#include "Persoon.h"

Student::Student(int _studentennummer, int _leeftijd, std::string _naam) : Persoon(_leeftijd, _naam)
{
    studentenummer = _studentennummer;
}

int Student::getStudentennummer()
{
    return studentenummer;
}
