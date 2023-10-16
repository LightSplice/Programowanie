#include <iostream>

void Zad2(int a[], const int b, float c)
{
	//Napisz funkcjê, która dla kolekcji danych liczbowych policzy ile jest liczb wiêkszych od œredniej arytmetycznej.
	int wieksze = 0;
	for (int i = 1; i < b; i++)
	{
		if (a[i] > c)
			wieksze = wieksze + 1;
	}
	std::cout << "Liczb wiekszych od sredniej jest " << wieksze << "\n";
}

void Zad3()
{
	//Napisz funkcje, która dla kolekcji danych liczbowych przeniesie te liczby do innej kolekcji w odwrotnej kolejnoœci.	
		const int rozmiar = 4;
		int tablicaLiczb[rozmiar];

		for (int i = 0; i < rozmiar; i++)
		{
			std::cout << "Podaj " << i << " liczbe:\n";
			std::cin >> tablicaLiczb[i];
		}

		for (int i = rozmiar - 1; i >= 0; i--)
		{
			std::cout << tablicaLiczb[i] << ", ";
		}
}

void Zad4()
{
	//Napisz funkcje, która dla kolekcji danych liczbowych obliczy czêstotliwoœæ wystêpowania danej liczby.
	const int rozmiar = 6;
	int tablicaLiczb[rozmiar];
	int tablicaCzestotliwosci[6];

	int zakresDolny = 0;
	int zakresGorny = 5;

	srand(time(NULL));

	for (int i = 0; i < rozmiar; i++)
	{
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < rozmiar; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";
	for (int i = 0; i < rozmiar; i++)
	{
		for (int j = 0; j < 6; j++)
		{
			tablicaCzestotliwosci[j] = j;
			if (i == tablicaCzestotliwosci[j])
			{
				tablicaCzestotliwosci[j] = tablicaCzestotliwosci[j]++;
			}
			
		}
		tablicaLiczb[i]++;
	}
	
	std::cout << "Statystyka:\n";
	for (int i = 0; i < 6; i++)
		std::cout << "Liczb " << i << " podano " << tablicaCzestotliwosci[i] << "\n";
}
void Zad1()
{
	//Napisz funkcjê, która dla kolekcji danych liczbowych obliczy œredni¹ arytmetyczn¹.
	const int rozmiar = 6;
	int tablicaLiczb[rozmiar];

	int zakresDolny = 4;
	int zakresGorny = 10;

	srand(time(NULL));

	for (int i = 0; i < rozmiar; i++)
	{
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < rozmiar; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	int suma = 0;
	for (int i = 0; i < rozmiar; i++)
	{
		suma = suma + tablicaLiczb[i];
	}
	float srednia = (suma * 1.0) / rozmiar;
	std::cout << "Srednia arytmetyczna to: " << srednia << "\n";
	
	Zad2(tablicaLiczb, rozmiar, srednia);
}

void zadania()
{
	short Zadanie;
	std::cin >> Zadanie;
	switch (Zadanie)
	{
	case 1:
		Zad1();
		break;
	case 2:
		Zad3();
		break;
	case 3:
		Zad4();
		break;
	}
}
int main()
{
	std::cout << "1. 1Zadanie\n" << "2. 3Zadanie\n" << "3. 4Zadanie\n";
	zadania();
}