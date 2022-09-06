#include <iostream>

/*
Zadanie 10
Napisz program który wczyta dwie liczby oraz operację arytmetyczną a następnie wykona podane działanie.
*/

void Zadanie10()
{
	float liczbaPierwsza, liczbaDruga;
	char znakOperacji;
	std::cout << "Podaj pierwszą liczbę\n";
	std::cin >> liczbaPierwsza;
	std::cout << "Podaj drugą liczbę\n";
	std::cin >> liczbaDruga;
	std::cout << "Podaj znak operacji (+, - , *, /)\n";
	std::cin >> znakOperacji;
	float wynik;
	
	switch (znakOperacji)
	{
	case '+':
		wynik = liczbaPierwsza + liczbaPierwsza;
		std::cout << "Wynik operacji dodawania" << wynik << "\n";
		break;
	case '-':
		wynik = liczbaPierwsza - liczbaPierwsza;
		std::cout << "Wynik operacji odejmowania" << wynik << "\n";
		break;
	case '*':
		wynik = liczbaPierwsza * liczbaPierwsza;
		std::cout << "Wynik operacji mnozenia" << wynik << "\n";
		break;
	case '/':
		wynik = liczbaPierwsza / liczbaPierwsza;
		std::cout << "Wynik operacji dzielenia" << wynik << "\n";
		break;
	default:
		std::cout << "Zla operacja\n";
	}
}

int main()
{
    
}

