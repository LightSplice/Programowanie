using System;

namespace ExeptionApp
{
    class Program
    {
        static void Main(string[] args)
        {
            double firstNumber, secondNumber, divNumber;
            Console.WriteLine("Podaj pierwszą liczbę: ");
            firstNumber = double.Parse(Console.ReadLine());

            Console.WriteLine("Podaj drugą liczbę: ");
            secondNumber = double.Parse(Console.ReadLine());

            divNumber = firstNumber / secondNumber;

            Console.WriteLine("Wynik dzielenia: " + divNumber);

            catch(Exception ex)
            {
                Console.WriteLine(ex.Message);
                Console.WriteLine(ex.StackTrace);
            }
        }
    }
}
