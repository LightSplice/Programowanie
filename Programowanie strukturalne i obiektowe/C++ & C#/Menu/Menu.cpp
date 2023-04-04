#include <iostream>
#include <string>

void showMenu()
{
	system("cls");
	std::cout << "Menu:\n";
	std::cout << "1. Pole kwadratu\n";
	std::cout << "2. Pole trojkata\n";
	std::cout << "3. Zadanie 1\n";
	std::cout << "4. Zadanie 2\n";
	std::cout << "5. Zadanie 3\n";
	std::cout << "6. Zadanie 4\n";
	std::cout << "7. Zadanie 5\n";
	std::cout << "8. Zadanie 6\n";
	std::cout << "0. Zamknij program\n";
}

int chooseOptionFromUser()
{
	std::cout << "Wybierz opcje\n";
	int selectedOption;
	std::cin >> selectedOption;

	return selectedOption;
}



void PoleTrojkata()
{
	int a,h;
	std::cout << "Podaj podstawe\n";
	std::cin >> a; 
	std::cout << "Podaj wysokosc\n";
	std::cin >> h;
	std::cout << "Wynik " << a * h / 2 << '\n';
}

void PoleKwadratu()
{
	int a;
	std::cout << "Podaj bok\n";
	std::cin >> a;
	std::cout << "Wynik " << a * a << '\n';
}

void Zad1()
{
	int Number;
	int n = 1;
	std::cout << "Enter an odd number \n";
	std::cin >> Number;
	for (int i = Number; i > n; i = i - 2)
	{
		if (i % 2 != 0)
			std::cout << i << ',';
	}
	if (Number % 2 != 0)
	std::cout << "1\n";
}

void Zad2()
{
	std::cout << "Enter a number: ";
	int num;
	std::cin >> num;
	int number1 = 0;
	int number2 = 1;
	int i;
	for (int n = 0; n < num; n = n++)
	{
		std::cout << number1 << ',';
		i = number1 + number2;
		number1 = number2;
		number2 = i;
	}
	std::cout << number1 << ',' << number2 << '\n';
}

void Zad3()
{
	int num;
	std::cout << "Podaj liczbe: ";
	std::cin >> num;
	for (int i = 1; i <= num / 2; i++)
	{
		if (num % i == 0)
			std::cout << i << ',';
	}
	std::cout << num << '\n';
}

void Zad4()
{
	std::cout << "Podaj liczbe: ";
	int NumberFromUser;
	std::cin >> NumberFromUser;
	int num;
	std::string ArrayOfWordsNumbers[10] = { "zero" , "jeden" , "dwa" , "trzy" , "cztery" , "piec" ,
											   "szesc" , "siedem" , "osiem" , "dziewiec" };
	//ArrayOfWordsNumbers[0] = "zero";
	//ArrayOfWordsNumbers[1] = "jeden";
	num = NumberFromUser;
	/*do
	{
		int digit = num % 10;
		num = num / 10;

		std::cout << ArrayOfWordsNumbers[digit] << ' ';

	} while (num != 0);
	*/
	std::cout << '\n';
	std::string stringNumber = "";
	do
	{
		int digit = num % 10;
		num = num / 10;

		stringNumber = ArrayOfWordsNumbers[digit] + " " + stringNumber;

	} while (num != 0);
	std::cout << stringNumber;
	std::cout << '\n';

}
void Zad5()
{
	std::cout << "Podaj liczbe to przeksztalcenia: ";
	int  table[100], num, i;
	std::cin >> num;
		for (i = 0;num != 0; i++)
		{
			table[i] = num % 2 != 0;
			num = num / 2;
		}
		do {
			i--;
			std::cout << table[i];
		} while (i != 0);
	std::cout << '\n';
}
void Zad6()
{
	std::cout << "Podaj kwote: ";
	int kwota;
	std::cin >> kwota;
	do
	{
		if (kwota >= 200)
		{
			do {

				kwota = kwota - 200;
				std::cout << "200, ";
			} while (kwota >= 200);
		}
		if (kwota >= 100)
		{
			do {
				kwota = kwota - 100;
				std::cout << "100, ";
			} while (kwota >= 100);
		}
		if (kwota >= 50)
		{
			do {
				kwota = kwota - 50;
				std::cout << "50, ";
			} while (kwota >= 50);
		}
		if (kwota >= 20)
		{
			do {
				kwota = kwota - 20;
				std::cout << "20, ";
			} while (kwota >= 20);
		}
		if (kwota >= 10)
		{
			do {
				kwota = kwota - 10;
				std::cout << "10, ";
			} while (kwota >= 10);
		}
		if (kwota >= 5 || kwota == 5)
		{
			kwota = kwota - 5;
			std::cout << "5, ";
		}
		if (kwota >= 2 && kwota < 5)
		{
			do {
				kwota = kwota - 2;
				std::cout << "2, ";
			} while (kwota >= 2);
		}
		if (kwota % 2 != 0)
		{
			kwota = kwota - 1;
			std::cout << "1, ";
		}
	} while (kwota != 0);
	std::cout << "0\n";
}
void doSelectedTask(int selectedOption)
{
	switch (selectedOption)
	{
	case 1:
		PoleKwadratu();
		break;
	case 2:
		PoleTrojkata();
		break;
	case 3:
		Zad1();
		break;
	case 4:
		Zad2();
		break;
	case 5:
		Zad3();
		break;
	case 6:
		Zad4();
		break;
	case 7:
		Zad5();
		break;
	case 8:
		Zad6();
		break;
	default:
		std::cout << "Brak opcji w Menu\n";
		break;
	}
}

void mainProgram()
{
	int dalej;
	do
	{
		//1. wyswietlenie menu
		showMenu();

		//2. wybranie opcji przez uzytkownika
		int selected = chooseOptionFromUser();
		system("cls");
		//3. Wykonanie wybranego zadania
		doSelectedTask(selected);
		do {
			std::cout << "Wpisz 1 jesli chcesz powtorzyc lub 0 jesli nie\n";
			std::cin >> dalej;
		} while (dalej != 1 && dalej != 0);
	} while (dalej == 1);
	
}

void main()
{
	mainProgram();
}