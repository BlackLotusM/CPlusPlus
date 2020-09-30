#include <iostream>
#include "Docent.h"
#include "Student.h"


int main()
{
    //salaris, leeftijd, naam
    Docent d1 = Docent(112, 29, "Kees");
    //Studentnummer, leeftijd, naam
    Student s1 = Student(2937123, 20, "Mikey");

    std::cout << "Docent";
    std::cout << "\n";
    std::cout << "Naam docent: " + d1.getName() << "\n" << "Salaris: " << d1.getSalaris() << "\n" << "Leeftijd: " << d1.getAge() ;
    std::cout << "\n"; 
    std::cout << "\n";

    std::cout << "Leerling";
    std::cout << "\n";
    std::cout << "Naam leerling: " << s1.getName() << "\n" << "Studentennummer: " << s1.getStudentennummer() << "\n" << "Leeftijd: " << s1.getAge() << "\n" ;
    std::cout << "\n";
    system("pause");
}
