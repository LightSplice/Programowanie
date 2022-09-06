#include <iostream>

/*
* Zadanie 3
Napisz program który wczyta dwie liczby i wyświetli większą z nich.
*/

void Zadanie3()
{
	int liczbaPierwsza, liczbaDruga;
	std::cout << "Podaj pierwszą liczbę\n";
	std::cin >> liczbaPierwsza;
	std::cout << "Podaj drugą liczbę\n";
	std::cin >> liczbaDruga;
	if (liczbaPierwsza > liczbaDruga)
	{
		std::cout << "Liczba pierwsza jest większa i jej wartość to " << liczbaPierwsza << "\n";
	}
	else if (liczbaPierwsza < liczbaDruga)
	{
		std::cout << "Liczba druga jest większa i jej wartość to " << liczbaDruga << "\n";
	}
	else
	{
		std::cout << "Obie liczby są równe.\n";
	}
}

/*
Zadanie 4
Napisz program który wczyta liczbę i wyświetli informację czy jest ona liczbą parzystą.
*/

void Zadanie4()
{
	int liczba;
	std::cout << "Podaj liczbę\n";
	std::cin >> liczba;

	/*
	Operator % zwraca reszę z dzielenia dwóch liczb całkowitych. Operator ten jest operaotrem binarnym.
	*/
	int reszta_z_dzielenia = liczba % 2;
	if (reszta_z_dzielenia == 0)
	{
		std::cout << "Podana liczba jest parzysta\n";
	}
	else
	{
		std::cout << "Podana liczba jest nieparzysta\n";
	}
}

/*
Zadanie 5
Oblicz wysokość podatku dochodowego jesli:
* podatek do kwoty 6000zł - 0%
* podatek od kwoty powyżej 6000zl - 5%
* podatek od kwoty powyżej 20000zl - 10%
* podatek od kwoty powyżej 50000zl - 15%
np. Użytkownik podaje, ze zarobił 70tys:
od 20tys liczymy 15%
od 30tys liczymy 10%
od 14tys liczymy 5%
a 6 tys z zerowym podatkiem
*/

void Zadanie5()
{
	float kwota;
	std::cout << "Podaj kwotę\n";
	std::cin >> kwota;

	float kwotaDoObliczen = kwota;
	float podatek = 0;
	if (kwotaDoObliczen > 50000)
	{
		podatek = podatek +(kwotaDoObliczen - 50000) * 15 / 100;
		kwotaDoObliczen = 50000;
	}
	if (kwotaDoObliczen > 20000)
	{
		podatek = podatek + (kwotaDoObliczen - 20000) * 10 / 100;
		kwotaDoObliczen = 20000;
	}
	if (kwotaDoObliczen > 6000)
	{
		podatek = podatek + (kwotaDoObliczen - 6000) * 5 / 100;
		kwotaDoObliczen = 6000;
	}

	std::cout << "Podatek należny " << podatek << "\n";

}

/*
Zadanie 6
Napisz program który wczyta trzy liczby i wyświetli największą.
*/

void Zadanie6()
{
	int liczbaPierwsza, liczbaDruga, liczbaTrzecia;
	std::cout << "Podaj pierwszą liczbę\n";
	std::cin >> liczbaPierwsza;
	std::cout << "Podaj drugą liczbę\n";
	std::cin >> liczbaDruga;
	std::cout << "Podaj trzecią liczbę\n";
	std::cin >> liczbaTrzecia;
	if (liczbaPierwsza >= liczbaDruga && liczbaPierwsza >= liczbaTrzecia)
	{
		std::cout << "Liczba pierwsza jest największa i jej wartość to " << liczbaPierwsza << "\n";
	}
	else if (liczbaDruga >= liczbaTrzecia)
	{
		std::cout << "Liczba druga jest największa i jej wartość to " << liczbaPierwsza << "\n";
	}
	else
	{
		std::cout << "Liczba trzecia jest największa i jej wartość to " << liczbaPierwsza << "\n";
	}
}

/*
Zadanie 7
Zbadaj czy z podanych 3 boków da się utworzyć trójkąt.
*/

void Zadanie7()
{
	int bokPierwszy, bokDrugi, bokTrzeci;
	std::cout << "Podaj pierwszy bok\n";
	std::cin >> bokPierwszy;
	std::cout << "Podaj drugi bok\n";
	std::cin >> bokDrugi;
	std::cout << "Podaj trzeci bok\n";
	std::cin >> bokTrzeci;

	if (bokPierwszy >= bokDrugi && bokPierwszy >= bokTrzeci)
	{
		if (bokDrugi + bokTrzeci > bokPierwszy)
		{
			std::cout << "Z tych boków da się utworzyć trójkąt\n";
		}
		else
		{
			std::cout << "Z tych boków nie da się utworzyć trójkąta\n";
		}
	}
	else if (bokDrugi >= bokPierwszy && bokDrugi >= bokTrzeci)
	{
		if (bokPierwszy + bokTrzeci > bokDrugi)
		{
			std::cout << "Z tych boków da się utworzyć trójkąt\n";
		}
		else
		{
			std::cout << "Z tych boków nie da się utworzyć trójkąta\n";
		}
	}
	else if (bokTrzeci >= bokPierwszy && bokTrzeci >= bokDrugi)
	{
		if (bokPierwszy + bokDrugi > bokTrzeci)
		{
			std::cout << "Z tych boków da się utworzyć trójkąt\n";
		}
		else
		{
			std::cout << "Z tych boków nie da się utworzyć trójkąta\n";
		}
	}
}

/*
Zadanie 8
Zbadaj czy z podanych 3 boków da się utworzyć trójkąt prostokątny.
*/

void Zadanie8()
{
	int bokPrzyprostokatnaPierwsza, bokPrzyprostokatnaDruga, bokPrzeciwprostokatna;
	std::cout << "Podaj pierwszą przyprostokątną\n";
	std::cin >> bokPrzyprostokatnaPierwsza;
	std::cout << "Podaj drugą przyprostokątną\n";
	std::cin >> bokPrzyprostokatnaDruga;
	std::cout << "Podaj przeciwprzyprostokątną\n";
	std::cin >> bokPrzeciwprostokatna;

	if (bokPrzyprostokatnaPierwsza * bokPrzyprostokatnaPierwsza + bokPrzyprostokatnaDruga * bokPrzyprostokatnaDruga == bokPrzeciwprostokatna * bokPrzeciwprostokatna)
	{
		std::cout << "Z tych boków da się utworzyć trójkąt prostokątny\n";
	}
	else
	{
		std::cout << "Z tych boków nie da się utworzyć trójkąta prostokątnego\n";
	}
}

/*
Zadanie 9
Napisz program który policzy miejsca zerowe funkcji kwadratowej. Wczytaj potrzebne dane z klawiatury.
*/

void Zadanie9()
{
	float wspolczynnikA, wspolczynnikB, wspolczynnikC;
	std::cout << "Podaj współczynnik A\n";
	std::cin >> wspolczynnikA;
	std::cout << "Podaj współczynnik B\n";
	std::cin >> wspolczynnikB;
	std::cout << "Podaj współczynnik C\n";
	std::cin >> wspolczynnikC;

	float delta = wspolczynnikB * wspolczynnikB - 4 * wspolczynnikA * wspolczynnikC;
	if (delta > 0)
	{
		float x1, x2;
		x1 = (-wspolczynnikB + sqrt(delta)) / (2 * wspolczynnikA);
		x2 = (-wspolczynnikB - sqrt(delta)) / (2 * wspolczynnikA);
		std::cout << "Są dwa miejsca zerowe: " << x1 << " oraz " << x2 << "\n";
	}
	else if (delta == 0)
	{
		float x0;
		x0 = (-wspolczynnikB) / (2 * wspolczynnikA);
		std::cout << "Jest jedno miejsca zerowe: " << x0 << "\n";
	}
	else
	{
		std::cout << "Brak rozwiązań w przestrzeni liczb rzeczywistych\n";
	}

}

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
	if (znakOperacji == '+')
	{
		wynik = liczbaPierwsza + liczbaDruga;
	}
	if (znakOperacji == '-')
	{
		wynik = liczbaPierwsza - liczbaDruga;
	}
	if (znakOperacji == '*')
	{
		wynik = liczbaPierwsza * liczbaDruga;
	}
	if (znakOperacji == '/')
	{
		if (liczbaDruga != 0)
		{
			wynik = liczbaPierwsza / liczbaDruga;
		}
		else
		{
			wynik = 0;
		}
	}

	std::cout << "Wynik operacji to: " << wynik << "\n";
}

int main()
{
	int liczba;
	std::cout << "Podaj liczbe\b";
	std::cin >> liczba;

	/*
	Instrukcja IF jest to instrukcja która sprawdza warunek znajdujący się w nawiasie. Jeśli warunek jest prawdziwy
	to wykonuje instrukcje które są umieszczone w nawiasach klamrowych. Jeśli warunek jest nieprawdziwy to te instrukcje są pomijane.
	*/
	if (liczba >= 0)
	{
		std::cout << "Podana liczba jest dodatnia\n";
	}
	if (liczba < 0)
	{
		std::cout << "Podana liczba jest ujemna\n";
	}

	/*
	Operatory porównania kótre można wykorzystać w warunku:
	> - większy
	>= - większy bądź równy
	< - mniejszy
	<= - mniejszy bądź równy
	== - równy
	!= - różny
	Są to operatory binarne. Wynikiem ich działania jest wartość logiczna true lub false.
	Wszystkie te operatory mają te same priorytety ale niższe niż operatory arytmetyczne.

	Priorytety:
	* /
	+ -
	> >= < <= == !=

	*/

	/*
	Instrukcja IF posiada frazę ELSE która jest nieobowiązkowa. Jesli warunek jest prawdziwy
	to instrukcje w nawiasach klamrowych po ELSE zostaną pominięte. Jesli warunek jest nieprawdziy
	to instrukcje w nawiasach klamrowych po ELSE zostaną wykonane.
	*/
	if (liczba >= 0)
	{
		std::cout << "Podana liczba jest dodatnia\n";
	}
	else
	{
		std::cout << "Podana liczba jest ujemna\n";
	}

	/*
	Instrukcje moża zagnieżdżać w sobie.
	Poniższy fragment wyświetla informacje czy liczba jest z zakresu <1;10>
	*/
	if (liczba >= 1)
	{
		if (liczba <= 10)
		{
			std::cout << "liczba z przedziału <1;10>";
		}
		else
			std::cout << "Nie jest z przedziału <1;10>";
	}
	else
	{
		std::cout << "Nie jest z przedziału <1;10>";
	}

	/*
	Można tworzyć warunki złożone. Do tego należy skorzystać z operatorów:
	&& - operator AND
	|| - operator OR
	! - operator NOT

	Operatory && i || są to operatory binarne a operator ! jest unarny (jeden argument umieszczony z prawej strony).
	Operatory te przyjmują wartość logiczna (true lub false) i zwracają wartość logiczną.

	a       b       a && b  a || b  !a
	false   false   false   false   true
	false   true    false   true    true
	true    false   false   true    false
	true    true    true    true    false

	Priorytety:
	!
	* /
	+ -
	> >= < <= == !=
	&& ||

	*/
	if (liczba >= 1 && liczba <= 10)
		std::cout << "liczba z przedziału";
	else
		std::cout << "Nie jest z przedziału";
}

