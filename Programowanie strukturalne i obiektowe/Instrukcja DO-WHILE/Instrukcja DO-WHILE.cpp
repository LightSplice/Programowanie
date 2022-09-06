#include <iostream>

/*
Zadanie 17
Sumę i średnią podanego ciągu liczb zakończonego zerem.
*/

void Zadanie17()
{
    float suma = 0;
    int ileLiczb = 0;
    float srednia = 0;
    float liczba;
    do 
    {
        std::cout << "Podaj liczbe\n";
        std::cin >> liczba;
        suma = suma + liczba;
        ileLiczb++;
    }while(liczba != 0);
    ileLiczb--;
    if (ileLiczb != 0)
        srednia = suma / ileLiczb;
    std::cout << "Suma: " << suma << "\n";
    std::cout << "Średnia: " << srednia << "\n";
}

/*
Zadanie 18
Program wczytuje ciąg liczb od użytkownika zakończone zerem.
Program zlicza ile razy kolejna liczba była mniejsza od poprzedniej.
*/

void Zadanie18()
{
    int ileLiczb = 0;
    float aktualnaLiczba;
    float poprzedniaLiczba = 0;
    do
    {
        std::cout << "Podaj liczbe\n";
        std::cin >> aktualnaLiczba;
        if (poprzedniaLiczba != 0 && poprzedniaLiczba > aktualnaLiczba)
        {
            ileLiczb++;
        }
        poprzedniaLiczba = aktualnaLiczba;
        
    } while (aktualnaLiczba != 0);
    std::cout << "Tych liczb było: " << ileLiczb << "\n";
}


/*
Zadanie 19
Gra w zgadywanie.
Program losuje liczbę od 1 do 100, a my mamy ja zgadnąć.
I w kółko pyta użytkownika jaka to liczba.
Podajemy liczbę, a program mówi, czy za duża, za mała, czy to ta.
*/
void Zadanie19()
{
    srand(time(NULL));
    //<a;b>
    //rand()%(a - b + 1) + b
    int losowaLiczba = rand() % (100 - 1 + 1) + 1;
    int liczbaUzytkownika;
    do
    {
        std::cout << "Podaj liczbę\n";
        std::cin >> liczbaUzytkownika;
        if (liczbaUzytkownika > losowaLiczba)
            std::cout << "Podałeś za dużą liczbę\n";
        if (liczbaUzytkownika < losowaLiczba)
            std::cout << "Podałeś za małą liczbę\n";
    } while (liczbaUzytkownika != losowaLiczba);
    std::cout << "Gratulacje!!!!\n";
}

int main()
{
    std::cout << "Hello World!\n";
}

