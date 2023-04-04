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
            switch(select)
            {
                case 1:
                    Podstawy fundamentals = new Podstawy();
                    fundamentals.Exercise1();
                    fundamentals.Exercise2();
                    fundamentals.Exercise3();
                    fundamentals.Exercise4();
                    fundamentals.Exercise5();
                    fundamentals.Exercise6();
                    fundamentals.Exercise7();
                    fundamentals.Exercise8();
                    fundamentals.Exercise9();
                    break;
                case 2:
                    InstrukcjaIf exercise = new InstrukcjaIf();
                    exercise.Exercise1();
                    exercise.Exercise2();
                    exercise.Exercise3();
                    exercise.Exercise4();
                    exercise.Exercise5();
                    exercise.Exercise6();
                    exercise.Exercise7();
                    break;
            }
            if (select == 3)
            {
                Pętle exercise = new Pętle();
                //exercise.Exercise1();
                //exercise.Exercise2();
                exercise.Exercise3();

            }
        }
    }
}
