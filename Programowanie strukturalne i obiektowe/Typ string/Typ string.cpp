#include <iostream>
#include <string>



void PierwszeSpojrzenieNaTypString()
{
	char znak = 'X';
	znak = '\n';

	std::string lancuchZnakow = "to jest lancuch znakow";
	lancuchZnakow = "X";
}

void PobierzImie()
{
	std::cout << "Podaj imie\n";
	std::string imie;
	std::cin >> imie;
	std::cout << "Podales: " << imie << "\n";
}

/*
cin:
1. jeśli bufor jest pusty to czeka na dane
2. jeśli w buforze są dane
	a) pomijane są początkowe znaki białe
	i jesli po pominięciu znaków bufor jest pusty to idz do punktu 1
	b) odczytywane są znaki:
		-) napotkamy znak nieprawidłowy dla typu
		-) napotkano znak biały
*/

void PobierzCaleZdnie()
{
	/*float liczba;
	std::cout << "Poddaj liczbe:\n";
	std::cin >> liczba;
	std::cout << "Podales liczbe: " << liczba << "\n";*/

	std::string lancuchZnakow;
	std::cout << "Podaj zdanie\n";
	std::cin >> lancuchZnakow;
	std::cout << "Podales: " << lancuchZnakow << "\n";

	std::cin >> lancuchZnakow;
	std::cout << "Podales ponownie: " << lancuchZnakow << "\n";

	std::cin >> lancuchZnakow;
	std::cout << "Podales ponownie: " << lancuchZnakow << "\n";

	std::cin >> lancuchZnakow;
	std::cout << "Podales ponownie: " << lancuchZnakow << "\n";
}

void PobierzCaleZdnieV2()
{
	std::string lancuchZnakow;
	std::cout << "Podaj zdanie:\n";
	std::getline(std::cin, lancuchZnakow);
	//std::cin >> lancuchZnakow;
	std::cout << "Podales: " << lancuchZnakow << "\n";
}

void DlugoscLancucha()
{
	std::string lancuchZnakow;
	std::cout << "Podaj zdanie:\n";
	std::getline(std::cin, lancuchZnakow);
	std::cout << "Podales: " << lancuchZnakow << "\n";
	std::cout << "Dlugosc lancucha znakow: " << lancuchZnakow.length() << "\n";
}

void BudowaLancuchaZnakow()
{
	std::string lancuchZnakow;
	std::cout << "Podaj zdanie:\n";
	std::getline(std::cin, lancuchZnakow);
	std::cout << "Podales: " << lancuchZnakow << "\n";
	std::cout << "Drugi znak to: " << lancuchZnakow[1] << "\n";

	lancuchZnakow[1] = 'X';
	std::cout << "Podales: " << lancuchZnakow << "\n";
}

/*
Zadanie 28
Program zlicza ilość wystąpień litery 'a'.
*/

//Ala ma kota a kot ma ale

void Zadanie28()
{
	std::string lancuchZnakow;
	std::cout << "Podaj zdanie:\n";
	std::getline(std::cin, lancuchZnakow);
	int ileMalejLiteryA = 0;
	//lancuchZnakow.length()
	for (int i = 0; i < lancuchZnakow.length(); i++)
	{
		if (lancuchZnakow[i] == 'a')
			ileMalejLiteryA++;
	}

	std::cout << "Malych liter 'a' jest " << ileMalejLiteryA << "\n";
}

/*
Zadanie 29
Program zlicza ile jest małych liter w podanym ciągu znaków
*/

void Zadanie29()
{
	std::string lancuchZnakow;
	std::cout << "Podaj zdanie:\n";
	std::getline(std::cin, lancuchZnakow);
	int ileMalychLiter = 0;
	int ileLiterAlfabetu = 0;
	//lancuchZnakow.length()
	for (int i = 0; i < lancuchZnakow.length(); i++)
	{
		if (lancuchZnakow[i] >= 'a' && lancuchZnakow[i] <= 'z')
			ileMalychLiter++;

		if ((lancuchZnakow[i] >= 'a' && lancuchZnakow[i] <= 'z') || (lancuchZnakow[i] >= 'A' && lancuchZnakow[i] <= 'Z'))
			ileLiterAlfabetu++;
	}

	std::cout << "Malych liter jest " << ileMalychLiter << "\n";
}

/*
Zadanie 30
Program wyświetla wyraz pobrany z konsoli wspak.
np podamy: Karol
odp: loraK

01234
Karol

length = 5
*/

void Zadanie30()
{
	std::string wyraz;
	std::cout << "Podaj wyraz\n";
	std::cin >> wyraz;
	std::cout << "Podales: " << wyraz << "\n";
	std::cout << "Wyraz wspak: ";
	for (int i = wyraz.length() - 1; i >= 0; i--)
		std::cout << wyraz[i];
	std::cout << "\n";
}

/*
Zadanie 31
Napisz program, który sprawdza czy podany wyraz jest palindromem.
Palindrom to wyraz, który jak czytamy od tyłu to jest taki sam
jakby go czytać od przodu np "kajak".
*/

void Zadanie31_V1()
{
	std::string wyraz;
	std::cout << "Podaj wyraz\n";
	std::cin >> wyraz;

	std::string wyrazWspak = "";
	for (int i = wyraz.length() - 1; i >= 0; i--)
		wyrazWspak = wyrazWspak + wyraz[i];

	std::cout << "Podales: " << wyraz << "\n";
	std::cout << "Wyraz wspak: " << wyrazWspak << "\n";

	if (wyraz == wyrazWspak)
		std::cout << "To jest palindrom\n";
	else
		std::cout << "To nie jest palindrom\n";
}

void Zadanie31_v2()
{
	std::string wyraz;
	std::cout << "Podaj wyraz\n";
	std::cin >> wyraz;

	bool jestPalindrom = true;

	//algorytm
	for (int i = 0, j = wyraz.length() - 1; j > i; i++, j--)
	{
		if (wyraz[i] != wyraz[j])
		{
			jestPalindrom = false;
			break;
		}
	}

	//if (jestPalindrom == true)
	if (jestPalindrom)
		std::cout << "To jest palindrom\n";
	else
		std::cout << "To nie jest palindrom\n";

	//if (jestPalindrom == false)
	//if (jestPalindrom != true)
	if (!jestPalindrom)
		std::cout << "To nie jest palindrom\n";
	else
		std::cout << "To jest palindrom\n";
}


int main()
{
	//PierwszeSpojrzenieNaTypString();
	//PobierzImie();
	//PobierzCaleZdnie();
	//PobierzCaleZdnieV2();
	//DlugoscLancucha();
	//BudowaLancuchaZnakow();
	//Zadanie28();
	//Zadanie30();
	Zadanie31_V1();
}

