#include <iostream>

float Max_1(float liczba1)
{
	return liczba1;
}

float Max_2(float liczba1, float liczba2)
{
	if (liczba1 > liczba2)
		return liczba1;
	else
		return liczba2;
}

float Max_2_v2(float liczba1, float liczba2)
{
	if (liczba1 > liczba2)
		return liczba1;
	else
		return liczba2;
}

float Max_3(float liczba1, float liczba2, float liczba3)
{
	if (liczba1 > liczba2 && liczba1 > liczba3)
		return liczba1;
	//else if (liczba2 > liczba1 && liczba2 > liczba3)
	else if (liczba2 > liczba3)
		return liczba2;
	else
		return liczba3;
}

float Max_3_v2(float liczba1, float liczba2, float liczba3)
{
	if (liczba1 > liczba2 && liczba1 > liczba3)
		return liczba1;
	else
		return Max_2(liczba2, liczba3);
}

float Max_4(float liczba1, float liczba2, float liczba3, float liczba4)
{
	if (liczba1 > liczba2 && liczba1 > liczba3 && liczba1 > liczba4)
		return liczba1;
	//else if (liczba2 > liczba1 && liczba2 > liczba3)
	else if (liczba2 > liczba3 && liczba2 > liczba4)
		return liczba2;
	else if (liczba3 > liczba4)
		return liczba3;
	else
		return liczba4;
}

float Max_4_v2(float liczba1, float liczba2, float liczba3, float liczba4)
{
	if (liczba1 > liczba2 && liczba1 > liczba3 && liczba1 > liczba4)
		return liczba1;
	else
		return Max_3_v2(liczba2, liczba3, liczba4);
}

float Max_5_v2(float liczba1, float liczba2, float liczba3, float liczba4, float liczba5)
{
	if (liczba1 > liczba2 
		&& liczba1 > liczba3 
		&& liczba1 > liczba4
		&& liczba1 > liczba5)
		return liczba1;
	else
		return Max_4_v2(liczba2, liczba3, liczba4, liczba5);
}

void Sort_1(float liczba1)
{
	std::cout << liczba1;

	std::cout << "\n";
}

void Sort_2(float liczba1, float liczba2)
{
	if (liczba1 > liczba2)	
		std::cout << liczba2<<", "<< liczba1;
	else
		std::cout << liczba1 << ", " << liczba2;

	std::cout << "\n";
}

void Sort_3(float liczba1, float liczba2, float liczba3)
{
	if (liczba1 < liczba2 && liczba1 < liczba3)
	{
		std::cout << liczba1 << ", ";
		if (liczba2 < liczba3)
			std::cout << liczba2 << ", " << liczba3;
		else
			std::cout << liczba3 << ", " << liczba2;
	}
	else
	{
		if (liczba2 < liczba3)
		{
			std::cout << liczba2 << ", ";
			if (liczba1 < liczba3)
				std::cout << liczba1 << ", " << liczba3;
			else
				std::cout << liczba3 << ", " << liczba1;
		}
		else
		{
			std::cout << liczba3 << ", ";
			if (liczba1 < liczba2)
				std::cout << liczba1 << ", " << liczba2;
			else
				std::cout << liczba2 << ", " << liczba1;
		}
	}

	std::cout << "\n";
}

int main()
{
	std::cout << "Maksymalna z liczb: 5 to: " << Max_1(5) << "\n";
	std::cout << "Maksymalna z liczb: 5, 8 to: " << Max_2(5, 8) << "\n";
	std::cout << "Maksymalna z liczb: 9, 8 to: " << Max_2(9, 8) << "\n";
	std::cout << "Maksymalna z liczb: 9, 9 to: " << Max_2(9, 9) << "\n";
	std::cout << "Maksymalna z liczb: 1, 3, 9 to: " << Max_3(1, 3, 9) << "\n";
	std::cout << "Maksymalna z liczb: 1, 13, 9 to: " << Max_3(1, 13, 9) << "\n";
	std::cout << "Maksymalna z liczb: 100, 13, 9 to: " << Max_3(100, 13, 9) << "\n";
	std::cout << "Maksymalna z liczb: 1, 9, 9 to: " << Max_3(1, 9, 9) << "\n";

	std::cout << "4: \n";
	Sort_1(4);
	std::cout << "Przed sortowaniem 4, 2: \n";
	Sort_2(4, 2);
}

