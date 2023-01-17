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

            for (int i = number; i <= Math.Sqrt(i); i++) 
            {
                if (i % 2 == 0)
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
