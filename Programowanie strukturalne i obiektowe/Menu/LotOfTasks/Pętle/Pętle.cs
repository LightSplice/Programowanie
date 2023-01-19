using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
namespace LotOfTasks
{
    class Pętle
    {
        public void Exercise1()
        {
            Console.WriteLine("Podaj liczbę pierwszą");
            int number = int.Parse(Console.ReadLine());

            if (number < 2)
            {
                Console.WriteLine("Liczba nie może być mniejsza od 2");
            }
            for (int i = 2; i * i <= number; i++)
            {
                if (number % i == 0)
                {
                    Console.WriteLine("Liczba nie jest liczbą pierwszą");
                }
                else
                {
                    Console.WriteLine("Liczba jest liczbą pierwszą");
                }
            }
        }
    }
}
