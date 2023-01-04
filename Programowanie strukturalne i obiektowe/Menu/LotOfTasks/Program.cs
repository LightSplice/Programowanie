using System;

namespace LotOfTasks
{
    class Program
    {
        static void Main(string[] args)
        {
            Console.WriteLine("Wybierz opcje: ");
            Console.WriteLine("1.Podstawy");
            Console.WriteLine("2.Instrukcja If");
            Console.WriteLine("3.Pętle");

            int select = int.Parse(Console.ReadLine());
            if (select == 1)
            {
                Podstawy exercise = new Podstawy();
                exercise.Exercise1();
                exercise.Exercise2();
                exercise.Exercise3();
                exercise.Exercise4();
                exercise.Exercise5();
                exercise.Exercise6();
                exercise.Exercise7();
                exercise.Exercise8();
                exercise.Exercise9();
            }
            if (select == 2)
            {
                InstrukcjaIf exercise = new InstrukcjaIf();
                exercise.Exercise1();
                exercise.Exercise2();
                exercise.Exercise3();
                exercise.Exercise4();
                exercise.Exercise5();
                exercise.Exercise6();
                exercise.Exercise7();
            }
            if (select == 3)
            {
                Pętle exercise = new Pętle();
                exercise.Exercise1();
            }
        }
    }
}
