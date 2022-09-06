#include <iostream>
#include <math.h>
#include <string>

//definicja funkcji
/*
typZwracany nazwaFunkcji(parametry)
{

}
*/

void WyswietlPowitanie()
{
	std::cout << "Hello World!\n";
}

void PobierzWyswietlLiczbe()
{
	std::cout << "Give me a number:\n";
	int liczba;
	std::cin >> liczba;
	std::cout << "Podales liczbe " << liczba << "\n";
}

void WyswietlLiczbe(int numer)
{
	std::cout << "Your number is " << numer << "\n";
}

void TestFunkcjiParametryzowanej()
{
	int liczba;
	liczba = 2;

	//.......
	//std::cout << "Your number is " << liczba << "\n";
	WyswietlLiczbe(liczba);

	//.......

	int liczba2 = liczba * 3;

	//......

	//std::cout << "Your number is " << liczba2 << "\n";
	WyswietlLiczbe(liczba2);
}

int WartoscBezwzgledna(int numer)
{
	int a;
	a = numer;

	if (a < 0)
		a = a * (-1);
	return a;
}

void TestFunkcjiZwracajacejDane()
{
	int liczba;
	std::cout << "Podaj liczbe\n";
	std::cin >> liczba;

	int liczbaBezwzgledna;

	/*liczbaBezwzgledna = liczba;
	if (liczbaBezwzgledna < 0)
		liczbaBezwzgledna = liczbaBezwzgledna * (-1);*/

		//liczbaBezwzgledna = abs(liczba);
	liczbaBezwzgledna = WartoscBezwzgledna(liczba);

	//float pierwiastek = sqrt(liczba);
	//float potega = pow(3, 6); // 6^3

	std::cout << "Wartosc bezwzgledna " << liczbaBezwzgledna << "\n";
}

/*
Wyświetl wszystkie informacje zakodowane w numerze PESEL.
Numer pobierz od uzytkownika z klawiatury.
*/

//funkcja zwraca wartość liczbową dla danych znaków
int KonwertujZnakiNaLiczbe(char znakDziesiatek, char znakJednostek)
{
	int cyfraDziesiatek = (int)znakDziesiatek - 48;
	int cyfraJednostek = (int)znakJednostek - 48;

	int wynik = cyfraDziesiatek * 10 + cyfraJednostek;
	return wynik;

	//return ((int)znakDziesiatek - 48) * 10 + (int)znakJednostek - 48;
}

//funkcja sprawdza numer PESEL
// jako parametr przyjmuje numer PESEL
//zwraca wartość:
//* true - jeśli numer pesel jest prawidlowy
//* false - jeśli numer pesel jest nieprawidłowy
bool SprawdzNumerPesel(std::string numer)
{
	//poprawna długość łańcucha znaków
	if (numer.length() != 11)
		return false;

	//dozowlone znaki w numerze PESEL
	for (int i = 0; i < numer.length(); i++)
	{
		if (numer[i] < '0' || numer[i] > '9')
			return false;
	}
	char znak = numer[2];
	int miesiac = KonwertujZnakiNaLiczbe(numer[2], numer[3]);

	if (miesiac < 1
		|| (miesiac > 12 && miesiac < 21)
		|| (miesiac > 32 && miesiac < 41)
		|| (miesiac > 52 && miesiac < 61)
		|| (miesiac > 72 && miesiac < 81)
		|| miesiac > 92)
		return false;

	int dzien = KonwertujZnakiNaLiczbe(numer[4], numer[5]);

	//wszystkie miesiące z 31 dniami
	if (dzien > 31)
		return false;

	if (dzien < 1)
		return false;

	//luty
	if (miesiac == 82 || miesiac == 2 || miesiac == 22 || miesiac == 42 || miesiac == 62)
	{
		//zostawiamy - dopiszemy
		//dla roku przestępnego
		if (dzien > 29)
			return false;

		//pozostałe lata
		//if (dzien > 28)
		//    return false;
	}
	//kwiecien
	if (miesiac == 86 || miesiac == 6 || miesiac == 26 || miesiac == 46 || miesiac == 66)
	{
		if (dzien > 30)
			return false;
	}

	//czerwiec
	if (miesiac == 84 || miesiac == 4 || miesiac == 24 || miesiac == 44 || miesiac == 64)
	{
		if (dzien > 30)
			return false;
	}

	//wrzesień
	if (miesiac == 89 || miesiac == 9 || miesiac == 29 || miesiac == 49 || miesiac == 69)
	{
		if (dzien > 30)
			return false;
	}

	//listopad
	if (miesiac == 91 || miesiac == 11 || miesiac == 31 || miesiac == 51 || miesiac == 71)
	{
		if (dzien > 30)
			return false;
	}


	int iloczyn0 = KonwertujZnakiNaLiczbe('0', numer[0]) * 1;
	int iloczyn1 = KonwertujZnakiNaLiczbe('0', numer[1]) * 3;
	int iloczyn2 = KonwertujZnakiNaLiczbe('0', numer[2]) * 7;
	int iloczyn3 = KonwertujZnakiNaLiczbe('0', numer[3]) * 9;
	int iloczyn4 = KonwertujZnakiNaLiczbe('0', numer[4]) * 1;
	int iloczyn5 = KonwertujZnakiNaLiczbe('0', numer[5]) * 3;
	int iloczyn6 = KonwertujZnakiNaLiczbe('0', numer[6]) * 7;
	int iloczyn7 = KonwertujZnakiNaLiczbe('0', numer[7]) * 9;
	int iloczyn8 = KonwertujZnakiNaLiczbe('0', numer[8]) * 1;
	int iloczyn9 = KonwertujZnakiNaLiczbe('0', numer[9]) * 3;

	int suma = iloczyn0 + iloczyn1 + iloczyn2 + iloczyn3 + iloczyn4 + iloczyn5 + iloczyn6 + iloczyn7 + iloczyn8 + iloczyn9;
	int reszta_z_dzielenia = suma % 10;
	int obliczonaCyfraKontrolna;
	if (reszta_z_dzielenia == 0)
		obliczonaCyfraKontrolna = 0;
	else
		obliczonaCyfraKontrolna = 10 - reszta_z_dzielenia;

	int cyfraKontrolna = KonwertujZnakiNaLiczbe('0', numer[10]);
	if (obliczonaCyfraKontrolna != cyfraKontrolna)
		return false;

	return true;
}

void WyswietlDane(std::string numer)
{
	//pobranie danych
	int plec = KonwertujZnakiNaLiczbe('0', numer[9]);
	std::string plecOpis;
	if (plec % 2 == 0)
		plecOpis = "Kobieta";
	else
		plecOpis = "Mezczyzna";

	int dzien = KonwertujZnakiNaLiczbe(numer[4], numer[5]);

	int miesiac = KonwertujZnakiNaLiczbe(numer[2], numer[3]);
	int stulecie = 0;

	if (miesiac >= 1 && miesiac <= 12)
	{
		miesiac = miesiac - 0;
		stulecie = 1900;
	}
	if (miesiac >= 21 && miesiac <= 32)
	{
		miesiac = miesiac - 20;
		stulecie = 2000;
	}

	if (miesiac >= 41 && miesiac <= 52)
	{
		miesiac = miesiac - 40;
		stulecie = 2100;
	}

	if (miesiac >= 61 && miesiac <= 72)
	{
		miesiac = miesiac - 60;
		stulecie = 2200;
	}

	if (miesiac >= 81 && miesiac <= 92)
	{
		miesiac = miesiac - 80;
		stulecie = 1800;
	}

	std::string miesiacOpis;
	switch (miesiac)
	{
	case 1:
		miesiacOpis = "Styczen";
		break;
	case 2:
		miesiacOpis = "Luty";
		break;
	case 3:
		miesiacOpis = "Marzec";
		break;
		//...
	}

	int rok = KonwertujZnakiNaLiczbe(numer[0], numer[1]) + stulecie;

	//wyświetlenie danych
	std::cout << "Informacja o numerze PESEL: " << numer << "\n";
	std::cout << "Plec osoby to: " << plecOpis << "\n";
	std::cout << "Dzien urodzenia: " << dzien << "\n";
	std::cout << "Miesiac urodzenia: " << miesiac << " (" << miesiacOpis << ")" << "\n";
	std::cout << "Rok urodzenia: " << rok << "\n";
}


//funkcja główna
void InformacjaNumerPesel()
{
	//Pobierz dane (PESEL)
	std::string numerPesel;
	std::cout << "Podaj numer PESEL\n";
	std::cin >> numerPesel;

	//if ( sprawdz poprawność numeru PESEL == true)
	//bool wynik = SprawdzNumerPesel(numerPesel);
	//if (wynik == true)
	if (SprawdzNumerPesel(numerPesel) == true)
	{
		//      odczytaj zakodowane dane w numerze PESEL
			//std::cout << "Podany numer PESEL jest prawidlowy\n";
		WyswietlDane(numerPesel);
	}
	else
	{
		//      wyświetl informacje o błędzie
		std::cout << "Podany numer PESEL jest nieprawidlowy\n";
	}

}

int KonwertujStringNaLiczbe(std::string liczbaStr)
{
	int wynik = 0;
	//"10587"
	int mnoznik = 1;
	for (int i = liczbaStr.length() - 1; i >= 0; i--)
	{
		int liczba = (int)liczbaStr[i] - 48;
		//wynik = wynik + liczba * mnoznik;
		wynik += liczba * mnoznik;
		//mnoznik = mnoznik * 10;
		mnoznik *= 10;
		//dodatkowa informacja o operatorze przypisania
		//wynik = wynik * liczba + 10;
		//wynik = wynik * (liczba + 10);
		//wynik *= liczba + 10;
		//i = i + 1;
		//i += 1;
		//i++;
	}

	return wynik;
}

int KonwertujString16NaLiczbe10(std::string liczbaStr)
{
	int wynik = 0;
	//"1AF8"
	int mnoznik = 1;
	for (int i = liczbaStr.length() - 1; i >= 0; i--)
	{
		int poprawka = 0;
		if (liczbaStr[i] >= '0' && liczbaStr[i] <= '9')
		{
			poprawka = 48;
			//poprawka = (int)'0';
		}
		if (liczbaStr[i] >= 'A' && liczbaStr[i] <= 'F')
		{
			//poprawka = 55;
			poprawka = (int)'A' - 10;
		}
		if (liczbaStr[i] >= 'a' && liczbaStr[i] <= 'f')
		{
			//poprawka = 87;
			poprawka = (int)'a' - 10;
		}

		int liczba = (int)liczbaStr[i] - poprawka;
		wynik += liczba * mnoznik;
		mnoznik *= 16;
	}

	return wynik;
}

int KonwertujStringLiczbaSystemMax58NaLiczbe10(std::string liczbaStr, int system)
{
	int wynik = 0;
	//"1AF8"
	int mnoznik = 1;
	for (int i = liczbaStr.length() - 1; i >= 0; i--)
	{
		int poprawka = 0;
		if (liczbaStr[i] >= '0' && liczbaStr[i] <= '9')
		{
			poprawka = 48;
			//poprawka = (int)'0';
		}
		if (liczbaStr[i] >= 'A' && liczbaStr[i] <= 'Z')
		{
			//poprawka = 55;
			poprawka = (int)'A' - 10;
		}
		if (liczbaStr[i] >= 'a' && liczbaStr[i] <= 'z')
		{
			//poprawka = 87;
			poprawka = (int)'a' - 35;
		}

		int liczba = (int)liczbaStr[i] - poprawka;
		wynik += liczba * mnoznik;
		mnoznik *= system;
	}

	return wynik;
}


/*
 Zadanie
 Zaszyfruj (deszyfruj) tekst podany przez użytkownika
 za pomocą szyfru Cezara.
 */

std::string PobierzTekstJawny()
{
	std::string tekstJawny;
	std::cout << "Podaj tekst do zaszyfrowania\n";
	//std::cin >> tekstJawny;
	std::getline(std::cin, tekstJawny);
	return tekstJawny;
}

std::string SzyfrujAlgorytmCezara(std::string szyfrowanyTekst)
{
	for (int i = 0; i < szyfrowanyTekst.length(); i++)
	{
		if ((szyfrowanyTekst[i] >= 'A' && szyfrowanyTekst[i] <= 'Z')
			|| (szyfrowanyTekst[i] >= 'a' && szyfrowanyTekst[i] <= 'z'))
		{
			szyfrowanyTekst[i] = szyfrowanyTekst[i] + 3;
			//korekta ponieważ wyszliśmy poza zakres liter alfabetu
			if (szyfrowanyTekst[i] >= 123
				|| (szyfrowanyTekst[i] >= 91 && szyfrowanyTekst[i] <= 93))
				szyfrowanyTekst[i] = szyfrowanyTekst[i] - 26;
		}
	}
	return szyfrowanyTekst;
}

std::string DeszyfrujAlgorytmCezara(std::string zaszyfrowanyTekst)
{
	for (int i = 0; i < zaszyfrowanyTekst.length(); i++)
	{
		if ((zaszyfrowanyTekst[i] >= 'A' && zaszyfrowanyTekst[i] <= 'Z')
			|| (zaszyfrowanyTekst[i] >= 'a' && zaszyfrowanyTekst[i] <= 'z'))
		{
			zaszyfrowanyTekst[i] = zaszyfrowanyTekst[i] - 3;
			//korekta ponieważ wyszliśmy poza zakres liter alfabetu
			if (zaszyfrowanyTekst[i] < 65
				|| (zaszyfrowanyTekst[i] >= 94 && zaszyfrowanyTekst[i] <= 96))
				zaszyfrowanyTekst[i] = zaszyfrowanyTekst[i] + 26;
		}
	}
	return zaszyfrowanyTekst;
}
//ABCDEFGHIJKLMNOPRSTUWXYZ
//DEFGHIJKLMNOPRSTUWXYZABC

void ZadanieSzyfrCezara()
{
	std::string tj = PobierzTekstJawny();
	std::string zaszyfrowanyTekst = SzyfrujAlgorytmCezara(tj);
	std::string odszyfrowanyTekst = DeszyfrujAlgorytmCezara(zaszyfrowanyTekst);

	std::cout << "Tekst jawny: \t\t" << tj << "\n";
	std::cout << "Tekst zaszyfrowany: \t" << zaszyfrowanyTekst << "\n";
	std::cout << "Tekst odszyfrowany: \t" << odszyfrowanyTekst << "\n";

}


/*
 Zadanie
 Wczytać liczbę od uzytkownika i obliczyć silnię tej liczby.
 */

int Silnia(int liczba)
{
	int aktualnyIloczyn = 1;
	for (int i = 2; i <= liczba; i++)
	{
		//aktualnyIloczyn = aktualnyIloczyn * i;
		aktualnyIloczyn *= i;
	}
	return aktualnyIloczyn;
}

int SilniaV2(int liczba)
{
	int wynik;

	if (liczba == 1)
		wynik = 1;
	else
		wynik = SilniaV2(liczba - 1) * liczba;

	return wynik;
}

void ZadanieSlinia()
{
	std::cout << "Podaj liczbe\n";
	int liczbaNaturalna;
	std::cin >> liczbaNaturalna;

	int wynik = SilniaV2(liczbaNaturalna);
	std::cout << "Slinia liczby " << liczbaNaturalna << "! = " << wynik << "\n";

}

/*


Napisz funkcję, która przyjmie jako parametr liczbę
i wyświetli wszystkie liczby od 1 do tej liczby.
*
Napisz funkcję która jako parametry przyjmie dwie liczby
i zwróci wiekszą z nich.
*
Napisz funkcję która jako parametry przyjmie trzy liczby
i zwróci największą z nich.
*
Napisz funkcję, która jako parametr przyjmie tekst
i wyświetli go od tyłu.

Napisz funkcję która jako parametr przyjmie dwie liczby
i wyświetli je w kolejności rosnącej.

Napisz funkcję która jako parametr przyjmie trzy liczby
i wyświetli je w kolejności rosnącej.

 */
void funkcjaPrzykladowa(int liczba)
{
	std::cout << "Podana liczba to:" << liczba;
}

void Test1()
{
	std::cout << "Podaj liczbe\n";
	int liczba;
	std::cin >> liczba;
	funkcjaPrzykladowa(liczba);
}



void main()
{
	/*PobierzWyswietlLiczbe();

	int liczba;
	liczba = 5;

	{
		float liczba;
		//char liczba;
		liczba = 7;
		std::cout << liczba;
	}
	std::cout << liczba;

	PobierzWyswietlLiczbe();

	WyswietlPowitanie();
	PobierzWyswietlLiczbe(); */

	//TestFunkcjiParametryzowanej();
	//TestFunkcjiZwracajacejDane();
	//InformacjaNumerPesel();

	/*std::cout << KonwertujStringLiczbaSystemMax58NaLiczbe10("1AB", 16) << '\n';
	std::cout << KonwertujStringLiczbaSystemMax58NaLiczbe10("1010", 2) << '\n';
	std::string liczbaStr;
	int system;
	std::cin >> liczbaStr >> system;
	std::cout << KonwertujStringLiczbaSystemMax58NaLiczbe10(liczbaStr,system)<< '\n';*/

	//ZadanieSzyfrCezara();
	//ZadanieSlinia();

	Test1();
}


