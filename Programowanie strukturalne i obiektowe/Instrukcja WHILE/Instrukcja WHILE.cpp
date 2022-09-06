#include <iostream>
#include <conio.h>
#include <Windows.h>

/*
Zadanie 20
Napisz program który obliczy NWD liczb wczytanych z klawiatury.
*/

void Zadanie20()
{
	int liczbaPierwsza, liczbaDruga;
	std::cout << "Podaj pierwszą liczbę:\n";
	std::cin >> liczbaPierwsza;
	std::cout << "Podaj drugą liczbę:\n";
	std::cin >> liczbaDruga;
	int tmpPierwszaLiczba = liczbaPierwsza;
	int tmpDrugaLiczba = liczbaDruga;
	int nwd;
	while (tmpDrugaLiczba != 0)
	{
		int tmp = tmpPierwszaLiczba;
		tmpPierwszaLiczba = tmpDrugaLiczba;
		tmpDrugaLiczba = tmp % tmpDrugaLiczba;
	}
	nwd = tmpPierwszaLiczba;
	std::cout << "NWD = " << nwd << "\n";
}

/*
Zadanie 21
Napisz program który obliczy NWW liczb wczytanych z klawiatury.
*/

void Zadanie21()
{
	int liczbaPierwsza, liczbaDruga;
	std::cout << "Podaj pierwszą liczbę:\n";
	std::cin >> liczbaPierwsza;
	std::cout << "Podaj drugą liczbę:\n";
	std::cin >> liczbaDruga;
	int tmpPierwszaLiczba = liczbaPierwsza;
	int tmpDrugaLiczba = liczbaDruga;
	while (tmpPierwszaLiczba % tmpDrugaLiczba != 0)
	{
		tmpPierwszaLiczba = tmpPierwszaLiczba + liczbaPierwsza;
	}
	int nww = tmpPierwszaLiczba;
	std::cout << "NWW = " << nww << "\n";

}

void GotoXY(int x, int y)
{
	if (x >= 0 && y >= 0)
	{
		COORD kursor;
		kursor.X = x;
		kursor.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), kursor);
	}
}

void ZadaniePoruszanieX()
{
	int x = 10;
	int y = 12;
	int noweX = x;
	int noweY = y + 1;

	int ramkaMinX = 0;
	int ramkaMaxX = 30;
	int ramkaMinY = 0;
	int ramkaMaxY = 20;

	int minX = ramkaMinX + 1;
	int maxX = ramkaMaxX - 1;
	int minY = ramkaMinY + 1;
	int maxY = ramkaMaxY - 1;

	char znakDoPoruszania = 'X';

	char znakRamki = '#';
	//górna krawędź ramki
	GotoXY(ramkaMinX, ramkaMinY);
	for (int i = ramkaMinX; i < ramkaMaxX; i++)
		std::cout << znakRamki;

	//dolna krawędź ramki
	GotoXY(ramkaMinX, ramkaMaxY);
	for (int i = ramkaMinX; i < ramkaMaxX; i++)
		std::cout << znakRamki;

	//lewa krawędź ramki
	for (int i = ramkaMinY; i < ramkaMaxY; i++)
	{
		GotoXY(ramkaMinX, i);
		std::cout << znakRamki;
	}

	//prawa krawędź ramki
	for (int i = ramkaMinY; i < ramkaMaxY; i++)
	{
		GotoXY(ramkaMaxX, i);
		std::cout << znakRamki;
	}

	unsigned char znakUzytkownika;
	do
	{
		//system("cls");
		//czyszczenie miejsca gdzie był znak
		GotoXY(x, y);
		std::cout << " ";

		//narysowanie znaku
		x = noweX;
		y = noweY;
		GotoXY(x, y);
		std::cout << znakDoPoruszania;

		znakUzytkownika = _getch();
		switch (znakUzytkownika)
		{
		case 0:
		case 224:
			znakUzytkownika = _getch();
			switch (znakUzytkownika)
			{
			case 72: //strzałka w górę
				if (noweY > minY)
					noweY--;
				break;
			case 80: //strzałaka w dół
				if (noweY < maxY)
					noweY++;
				break;
			case 75: //strzałka w lewo
				if (noweX > minX)
					noweX--;
				break;
			case 77: //strzałka w prawo
				if (noweX < maxX)
					noweX++;
				break;
			}
			break;
		case 'w':
			if (noweY > minY)
				noweY--;
			break;
		case 's':
			if (noweY < maxY)
				noweY++;
			break;

		default:
			break;
		}
	} while (znakUzytkownika != 27); //ESC

}

int main()
{
	ZadaniePoruszanieX();
}
