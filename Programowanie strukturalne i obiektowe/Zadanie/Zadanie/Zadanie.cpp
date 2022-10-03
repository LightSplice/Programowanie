#include <iostream>

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
    std::cout << '1';
}
void Zad2()
{
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
    std::cout << number1 << ',' << number2;
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
    std::cout << num;
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
int main()
{
     //Zad1();
     //Zad2();
     //Zad3();
     Zad4();
}