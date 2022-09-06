// Instrukcja FOR.cpp : Ten plik zawiera funkcję „main”. W nim rozpoczyna się i kończy wykonywanie programu.
//

#include <iostream>

/*
Zadanie 11
Napisz program który wczyta liczbę a następnie wyświetli w jednej linii tyle gwiazdek.
np.
Podaj liczbę: 6
******
*/

void Zadanie11()
{
	int ileGwizadek;
	std::cout << "Podaj ilość gwiazdek\n";
	std::cin >> ileGwizadek;
	for (int i = 0; i < ileGwizadek; i++)
		std::cout << "*";
	std::cout << "\n";
}

/*
Zadanie 12
Napisz program, który wypiszę wszystkie liczby naturalne parzyste mniejsze od podanej liczby.
*/

void Zadanie12()
{
	int liczba;
	std::cout << "Podaj liczbę\n";
	std::cin >> liczba;
	liczba = liczba - liczba % 2;
	for (int i = liczba - 1; i > 0; i = i - 2)
		std::cout << i << ", ";
	std::cout << "\n";
}

/*
Zadanie 13
Użytkownik podaje początkową liczbę oraz krok, a program liczy w dół i wypisuje wszystkie liczby dodanie.
Np: początkowa: 11, krok: 3. Program wypiszę: 11 8 5 2
*/

void Zadanie13()
{
	int liczba, krok;
	std::cout << "Podaj liczbę\n";
	std::cin >> liczba;
	std::cout << "Podaj krok\n";
	std::cin >> krok;
	for (int i = liczba; i > 0; i = i - krok)
		std::cout << i << ", ";
	std::cout << "\n";
}

/*
Zadanie 14
Napisz program który narysuje kwadrat z gwiazdek o rozmiarze wczytanym z klawiatury.
Np. Podaj rozmiar: 4
****
****
****
****
*/

void Zadanie14()
{
	int ileGwizadek, iloscLinii;
	std::cout << "Podaj ilość gwiazdek\n";
	std::cin >> ileGwizadek;
	std::cout << "Podaj ilość linii\n";
	std::cin >> iloscLinii;
	for (int i = 0; i < iloscLinii; i++)
	{
		for (int j = 0; j < ileGwizadek; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

/*
Zadanie 15
Napisz program który narysuje trójkąt z gwiazdek o rozmiarze wczytanym z klawiatury.
Np. Podaj rozmiar: 4
*
**
***
****
*/

void Zadanie15()
{
	int iloscLinii;
	std::cout << "Podaj ilość linii\n";
	std::cin >> iloscLinii;
	for (int i = 0; i < iloscLinii; i++)
	{
		for (int j = 0; j <= i; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

/*
Zadanie 16
Napisz program który narysuje trójkąt z gwiazdek o rozmiarze wczytanym z klawiatury.
Np. Podaj rozmiar: 4
	*
   ***
  *****
 *******
*/

void Zadanie16()
{
	int iloscLinii;
	std::cout << "Podaj ilość linii\n";
	std::cin >> iloscLinii;
	for (int i = 0; i < iloscLinii; i++)
	{
		for (int j = 0; j < iloscLinii - i; j++)
		{
			std::cout << " ";
		}
		for (int j = 0; j < 2 * i + 1; j++)
		{
			std::cout << "*";
		}
		std::cout << "\n";
	}
}

int main()
{
	Zadanie16();
}
