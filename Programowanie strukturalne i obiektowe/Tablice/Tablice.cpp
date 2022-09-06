#include <iostream>
#include <math.h>
/*
Napisz funkcję w której wczytamy 5 liczb i wyświetlimy je w odwrotnej kolejności.
 */

void Zadanie1()
{
	int liczba0, liczba1, liczba2, liczba3, liczba4;
	std::cout << "Podaj 0 liczbe:\n";
	std::cin >> liczba0;
	std::cout << "Podaj 1 liczbe:\n";
	std::cin >> liczba1;
	std::cout << "Podaj 2 liczbe:\n";
	std::cin >> liczba2;
	std::cout << "Podaj 3 liczbe:\n";
	std::cin >> liczba3;
	std::cout << "Podaj 4 liczbe:\n";
	std::cin >> liczba4;

	std::cout << liczba4 << ", ";
	std::cout << liczba3 << ", ";
	std::cout << liczba2 << ", ";
	std::cout << liczba1 << ", ";
	std::cout << liczba0;
}

void Zadanie2()
{
	int liczby[5];
	std::cout << "Podaj 0 liczbe:\n";
	std::cin >> liczby[0];
	std::cout << "Podaj 1 liczbe:\n";
	std::cin >> liczby[1];
	std::cout << "Podaj 2 liczbe:\n";
	std::cin >> liczby[2];
	std::cout << "Podaj 3 liczbe:\n";
	std::cin >> liczby[3];
	std::cout << "Podaj 4 liczbe:\n";
	std::cin >> liczby[4];

	std::cout << liczby[4] << ", ";
	std::cout << liczby[3] << ", ";
	std::cout << liczby[2] << ", ";
	std::cout << liczby[1] << ", ";
	std::cout << liczby[0] << ", ";
}

void Zadanie3()
{
	const int rozmiar = 5;
	int liczby[rozmiar];
	std::cout << "Podaj 0 liczbe:\n";
	std::cin >> liczby[0];
	std::cout << "Podaj 1 liczbe:\n";
	std::cin >> liczby[1];
	std::cout << "Podaj 2 liczbe:\n";
	std::cin >> liczby[2];
	std::cout << "Podaj 3 liczbe:\n";
	std::cin >> liczby[3];
	std::cout << "Podaj 4 liczbe:\n";
	std::cin >> liczby[4];

	for (int i = 4; i >= 0; i--)
		std::cout << liczby[i] << ", ";
}

void Zadanie4()
{
	const int rozmiar = 5;
	int liczby[rozmiar];

	for (int i = 0; i < rozmiar; i++)
	{
		std::cout << "Podaj " << i << " liczbe:\n";
		std::cin >> liczby[i];
	}

	for (int i = rozmiar - 1; i >= 0; i--)
	{
		std::cout << liczby[i] << ", ";
	}
}

/*
 Napisz program, który uzupełni tablicę liczbami pseudolosowymi,
 wyswietli jej zawartość oraz znajdzie wartość najwiekszą.
 */

void Zadanie5()
{
	const int ROZMIAR_TABLICY = 5;
	int tablicaLiczb[ROZMIAR_TABLICY];

	srand(time(NULL));

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		//zakres <0; 100>
		tablicaLiczb[i] = rand() % 101; // <0; RAND_MAX)
	}

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	//szukanie maksymalnej
	int max = tablicaLiczb[0];
	for (int i = 1; i < ROZMIAR_TABLICY; i++)
	{
		if (tablicaLiczb[i] > max)
			max = tablicaLiczb[i];
	}
	std::cout << "Maksymalna liczba to " << max << "\n";
}

/*
 Napisz program, który dla kolekcji liczb policzy ile jest liczb parzystych.
 */

void Zadanie6()
{
	const int ROZMIAR_TABLICY = 5;
	int tablicaLiczb[ROZMIAR_TABLICY];

	int zakresDolny = 6;
	int zakresGorny = 10;

	srand(time(NULL));

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		//zakres <zakresDolny; zakresGorny>
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	//Tutaj umieszczamy algorytm dla zadania
	int licznik = 0;
	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		if (tablicaLiczb[i] % 2 == 0)
			//if (tablicaLiczb[i] > 0) // czy liczba jest dodatnia
			licznik++;
	}
	std::cout << "Ilosc liczb parzystych to: " << licznik << "\n";
}

/*
  Napisz program, który dla kolekcji liczb policzy srednia artymetyczna tych liczb
 */

void Zadanie7()
{
	const int ROZMIAR_TABLICY = 6;
	int tablicaLiczb[ROZMIAR_TABLICY];

	int zakresDolny = 6;
	int zakresGorny = 10;

	srand(time(NULL));

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		//zakres <zakresDolny; zakresGorny>
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	//Tutaj umieszczamy algorytm dla zadania
	int suma = 0;
	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		suma = suma + tablicaLiczb[i];
	}
	float srednia = (suma * 1.0) / ROZMIAR_TABLICY;
	std::cout << "Srednia arytmetyczna to: " << srednia << "\n";
}

/*
 Napisz funkcję, która posortuje rosnąco liczby w tablicy.
 */

void Zadanie8()
{
	const int ROZMIAR_TABLICY = 5;
	int tablicaLiczb[ROZMIAR_TABLICY];

	int zakresDolny = 6;
	int zakresGorny = 10;

	srand(time(NULL));

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		//zakres <zakresDolny; zakresGorny>
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	//Tutaj umieszczamy algorytm dla zadania

	//sortowanie bąbelkowe

	for (int i = 0; i < ROZMIAR_TABLICY - 1; i++)
	{
		for (int j = 0; j < ROZMIAR_TABLICY - 1; j++)
		{
			if (tablicaLiczb[j] > tablicaLiczb[j + 1])
			{
				int tmp = tablicaLiczb[j];
				tablicaLiczb[j] = tablicaLiczb[j + 1];
				tablicaLiczb[j + 1] = tmp;
			}
		}
	}

	std::cout << "Kolekcja po posotrowaniu:\n";
	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

}

/*
 Zadanie 25
Napisz program który pobiera ciąg liczb jednocyfrowych od użytkownika (0 kończy ciąg)
a następnie wyświetla statystyki ile razy wystąpiła dana liczba.
 */

void Zadanie25()
{
	int liczbaUzytkownika;
	int statystykaTablica[10];

	for (int i = 0; i < 10; i++)
		statystykaTablica[i] = 0;

	do
	{
		std::cout << "Podaj liczbe:\n";
		std::cin >> liczbaUzytkownika;
		if (liczbaUzytkownika >= 0 && liczbaUzytkownika <= 9)
		{
			statystykaTablica[liczbaUzytkownika]++;
		}
		else
		{
			if (liczbaUzytkownika < 0)
				liczbaUzytkownika = -liczbaUzytkownika;
			int reszta;
			int liczba = liczbaUzytkownika;
			do
			{
				reszta = liczba % 10;
				statystykaTablica[reszta]++;
				liczba = liczba / 10;
			} while (liczba != 0);
		}

	} while (liczbaUzytkownika != 0);
	std::cout << "Statystyka:\n";
	for (int i = 0; i < 10; i++)
		std::cout << "Liczb " << i << " podano " << statystykaTablica[i] << "\n";
}

/*
 Napisz funkcję, która pobierze od uzytkownika liczbę
 i sprawdzi czy jest on pierwsza.
 */

void Zadanie26()
{
	int liczbaUzytkownika;
	std::cout << "Podaj liczbe:\n";
	std::cin >> liczbaUzytkownika;

	bool jestPierwsza = true;
	// <2 ; liczbaUzytkowanika-1>
	// <2; pierwiastekKwadratowy(liczbaUzytkownika)>
	for (int i = 2; i <= sqrt(liczbaUzytkownika); i++)
	{
		if (liczbaUzytkownika % i == 0)
		{
			jestPierwsza = false;
			break;
		}
	}

	if (jestPierwsza == true)
		std::cout << "Liczba " << liczbaUzytkownika << " jest pierwsza\n";
	else
		std::cout << "Liczba " << liczbaUzytkownika << " nie jest pierwsza\n";
}

/*
Napisz funkcję która wyświtli wszystkie liczby pierwsze
z zakresu podanego przez użytkownika
*/

void Zadanie27()
{
	int zakresGorny;
	std::cout << "Podaj zakres gorny:\n";
	std::cin >> zakresGorny;

	for (int i = 2; i <= zakresGorny; i++)
	{
		bool jestPierwsza = true;
		for (int j = 2; j <= sqrt(i); j++)
		{
			if (i % j == 0)
			{
				jestPierwsza = false;
				break;
			}
		}

		if (jestPierwsza)
			std::cout << i << ", ";
	}
}

/*
Napisz funkcję, która wyznaczy liczby pierwsze
za pomocą algorytmu sita Eratostenesa
*/

void Zadanie28()
{
	int zakresGorny;
	std::cout << "Podaj zakres gorny:\n";
	std::cin >> zakresGorny;

	bool jestPierwsza[2000000000];
	for (int i = 0; i < 2000000000; i++)
		jestPierwsza[i] = true;

	double wynikPierwiastka = sqrt(zakresGorny);
	for (int i = 2; i < wynikPierwiastka; i++)
	{
		//if (liczba i nie jest wykreślona)
		if (jestPierwsza[i] == true)
		{
			//nalezy wykreślić wszystkie jej wielokrotności
			for (int j = i + i; j < zakresGorny; j = j + i)
			{
				jestPierwsza[j] = false;
			}
		}
	}

	for (int i = 2; i < zakresGorny; i++)
		if (jestPierwsza[i])
			std::cout << i << ", ";

}

int main()
{
	Zadanie28();
}

void Szablon()
{
	const int ROZMIAR_TABLICY = 5;
	int tablicaLiczb[ROZMIAR_TABLICY];

	int zakresDolny = 6;
	int zakresGorny = 10;

	srand(time(NULL));

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		//zakres <zakresDolny; zakresGorny>
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	//Tutaj umieszczamy algorytm dla zadania
}
