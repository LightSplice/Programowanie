#include <iostream>

int main()
{
	char znak;
	znak = 'a';
	std::cout << znak << "\n";
	znak = 97;
	std::cout << znak << "\n";
	znak = znak + 1;
	std::cout << znak << "\n";

	unsigned char znakUzytkownika;
	std::cout << "Podaj znak\n";
	std::cin >> znakUzytkownika;

	std::cout << znakUzytkownika;
	//if (znakUzytkownika >= 97 && znakUzytkownika <= 122)
	if (znakUzytkownika >= 'a' && znakUzytkownika <= 'z')
		std::cout << "Podano mala litere alfabetu\n";
	else
		std::cout << "Pozostały znak\n";
}
