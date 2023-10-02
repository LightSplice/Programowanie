#include <iostream>


void Zad1()
{
	const int ROZMIAR_TABLICY = 6;
	int tablicaLiczb[ROZMIAR_TABLICY];

	int zakresDolny = 4;
	int zakresGorny = 10;

	srand(time(NULL));

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		tablicaLiczb[i] = rand() % (zakresGorny - zakresDolny + 1) + zakresDolny;
	}

	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		std::cout << tablicaLiczb[i] << ", ";
	}
	std::cout << "\n";

	int suma = 0;
	for (int i = 0; i < ROZMIAR_TABLICY; i++)
	{
		suma = suma + tablicaLiczb[i];
	}
	float srednia = (suma * 1.0) / ROZMIAR_TABLICY;
	std::cout << "Srednia arytmetyczna to: " << srednia << "\n";
}
void Zad2(int a[], const int b, float c)
{
	int wieksze = 0;
	for (int i = 1; i < b; i++)
	{
		if (a[i] > c)
			wieksze = wieksze + 1;
	}
	std::cout << "Liczb wiekszych od sredniej jest " << wieksze << "\n";
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
	}
}
int main()
{
	std::cout << "1.Zadanie\n";
	zadania();
}