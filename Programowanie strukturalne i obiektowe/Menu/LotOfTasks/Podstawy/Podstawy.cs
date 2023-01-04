using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LotOfTasks
{
    class Podstawy
    {
        public void Exercise1()
        {
            Console.WriteLine("Podaj dwie liczby:");

            int firstNumber, secondNumber;

            float result;
            firstNumber = int.Parse(Console.ReadLine());
            secondNumber = int.Parse(Console.ReadLine());

            result = (firstNumber + secondNumber) / 2;

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise2()
        {
            Console.WriteLine("Podaj bok a i b:");

            int a, b, result;

            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());

            result = a * b;

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise3()
        {
            Console.WriteLine("Podaj r i h");

            double PI, r, h, result;
 
            PI = Math.PI;
            r = int.Parse(Console.ReadLine());
            h = int.Parse(Console.ReadLine());

            result = 3 / PI * (r * r) * h;

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise4()
        {
            Console.WriteLine("Podaj r");

            double PI, r, result;

            PI = Math.PI;
            r = int.Parse(Console.ReadLine());

            result = PI * (r * r);

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise5()
        {
            Console.WriteLine("Podaj liczby:");

            int firstNumber, secondNumber, result;

            firstNumber = int.Parse(Console.ReadLine());
            secondNumber = int.Parse(Console.ReadLine());

            result = (firstNumber * firstNumber) + (secondNumber * secondNumber);

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise6()
        {
            Console.WriteLine("Podaj podstawę b i wysokość h");

            int b, h, result;

            b = int.Parse(Console.ReadLine());
            h = int.Parse(Console.ReadLine());

            result = b * h / 2;

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise7()
        {
            Console.WriteLine("Podaj r");

            double PI, r, result;
            float number;

            PI = Math.PI;
            r = int.Parse(Console.ReadLine());
            number = 4 / 3;

            result = number * PI * (r * r * r);

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise8()
        {
            Console.WriteLine("Podaj podstawę a i b oraz wysokość h");

            int a, b, h, result;

            a = int.Parse(Console.ReadLine());
            b = int.Parse(Console.ReadLine());
            h = int.Parse(Console.ReadLine());

            result = (a + b) * h / 2;

            Console.WriteLine("Wynik: " + result);
        }
        public void Exercise9()
        {
            Console.WriteLine("Podaj trzy liczby:");

            int firstNumber, secondNumber, thirdNumber, firstNumberWeight, secondNumberWeight, thirdNumberWeight, result;

            Console.WriteLine("Pierwsza waga i liczba: ");
            firstNumberWeight = int.Parse(Console.ReadLine());
            firstNumber = int.Parse(Console.ReadLine());
            Console.WriteLine("Druga waga i liczba: ");
            secondNumberWeight = int.Parse(Console.ReadLine());
            secondNumber = int.Parse(Console.ReadLine());
            Console.WriteLine("Trzecia waga i liczba: ");
            thirdNumberWeight = int.Parse(Console.ReadLine());
            thirdNumber = int.Parse(Console.ReadLine());

            result = firstNumberWeight * firstNumber + secondNumberWeight * secondNumber + thirdNumberWeight * thirdNumber;

            Console.WriteLine("Wynik: " + result);
        }
    }
}