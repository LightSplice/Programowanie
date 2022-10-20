/*
Zadanie
Napisa� klas� (oraz kod testuj�cy) opisuj�cy osob�.
* Doda� 5 p�l opisuj�cych osob� (ma by� rok urodzenia).
* Dodanie konstruktor�w umo�liwiaj�cych utworzenie obiektu na par� sposobow.
* Metoda kt�ra wyswietli informacje o osobie.
* Metoda kt�ra wy�wietli czy osoba jest pe�noletnia czy nie.
*/

#include <iostream>
#include <ctime>

class Dane
{
public:
    void Inf()
    {
#pragma region PersonInformations
        std::cout << "Name: ";
        std::cin >> Name;
        std::cout << "Last Name: ";
        std::cin >> LastName;
        std::cout << "Country: ";
        std::cin >> Country;
        std::cout << "Domicile: ";
        std::cin >> Domicile;
        std::cout << "Date of Birth: ";
        std::cin >> DateOfBirth;

#pragma endregion

#pragma region Age
        time_t now = time(0);

        std::cout << "Number of second since January 1,1970 is:: "
            << now << std::endl;

        tm* ltm = new tm;
        localtime_s(ltm, &now);

        // print various components of tm structure.
        std::cout << "Year: " << 1900 + ltm->tm_year << std::endl;

        Wiek = 1900 + ltm->tm_year - DateOfBirth;
        std::cout << "Wiek to: " << Wiek << '\n';
        if (Wiek < 18)
            std::cout << "This person is an adult.\n";
        else
            std::cout << "This person is not an adult.\n";
        delete ltm;
#pragma endregion
    }
private:

    std::string Name, LastName, Country, Domicile;
    int DateOfBirth, Wiek;

protected:

};
int main()
{
    Dane Maciek;
    Maciek.Inf();

    /*std::cout << "Month: " << 1 + ltm->tm_mon << std::endl;
    std::cout << "Day: " << ltm->tm_mday << std::endl;
    std::cout << "Time: " << ltm->tm_hour << ":";
    std::cout << ltm->tm_min << ":";
    std::cout << ltm->tm_sec << std::endl;
    */
}