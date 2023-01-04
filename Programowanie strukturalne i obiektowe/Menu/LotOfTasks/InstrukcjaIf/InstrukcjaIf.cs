using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace LotOfTasks
{
    class InstrukcjaIf
    {
        public void Exercise1()
        {
            Console.WriteLine("Podaj liczbe: ");

            int number = int.Parse(Console.ReadLine());

            if (number % 2 == 0)
            {
                Console.WriteLine("Liczba " + number + " jest parzysta");
            }
            
            else if (number % 2 != 0)
            {
                Console.WriteLine("Liczba " + number + " nie jest parzysta");
            }
        }

        public void Exercise2()
        {
            Console.WriteLine("Podaj liczbe: ");

            int number = int.Parse(Console.ReadLine());

            if (number > 0)
            {
                Console.WriteLine("Liczba " + number + " jest dodatnia");
            }

            else if (number < 0)
            {
                Console.WriteLine("Liczba " + number + " jest ujemna");
            }

            else
            {
                Console.WriteLine("Liczba " + number + " jest rowna zeru");
            }
        }

        public void Exercise3()
        {
            Console.WriteLine("Podaj rok: ");

            int year = int.Parse(Console.ReadLine());

            if (year % 4 == 0)
            {
                Console.WriteLine("Jest to rok przestepczy");
            }

            if (year % 4 != 0)
            {
                Console.WriteLine("Nie jest to rok przestepczy");
            }
        }

        public void Exercise4()
        {
            Console.WriteLine("Podaj ocenę (1-6): ");

            int grade = int.Parse(Console.ReadLine());

            if (grade == 1)
            {
                Console.WriteLine("Niedopuszczający");
            }
            else if (grade == 2)
            {
                Console.WriteLine("Dopuszczający");
            }
            else if (grade == 3)
            {
                Console.WriteLine("Dostateczny");
            }
            else if (grade == 4)
            {
                Console.WriteLine("Dobry");
            }
            else if (grade == 5)
            {
                Console.WriteLine("Bardzo Dobry");
            }
            else if (grade == 6)
            {
                Console.WriteLine("Celujący");
            }
        }

        public void Exercise5()
        {
            Console.WriteLine("Podaj hasło \n Password: ");

            string password = Console.ReadLine();

            if (password == "password")
            {
                Console.WriteLine("Hasło poprawne");
            }
            else
            {
                Console.WriteLine("Hasło niepoprawne");
            }
        }

        public void Exercise6()
        {
            Console.WriteLine("Podaj datę (Rok, Miesiąc, Dzień): ");

            int Year = int.Parse(Console.ReadLine());
            int Month = int.Parse(Console.ReadLine());
            int Day = int.Parse(Console.ReadLine());

            do
            {
                if (Month < 1 || Month > 12)
                {
                    Console.WriteLine("Podaj poprawną datę\n");
                    Month = int.Parse(Console.ReadLine());

                }
            } while (Month < 1 || Month > 12);

            if (Month == 01 || Month == 1)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());

                    }
                } while (Day < 1 || Day > 31);
            }

            else if (Month == 02 || Month == 2)
            {
                if (Year % 4 == 0)
                {
                    do
                    {
                        if (Day < 1 || Day > 29)
                        {
                            Console.WriteLine("Podaj poprawną datę\n");
                            Day = int.Parse(Console.ReadLine());
                        }
                    } while (Day < 1 || Day > 29);
                }
                else
                {
                    do
                    {
                        if (Day < 1 || Day > 28)
                        {
                            Console.WriteLine("Podaj poprawną datę\n");
                            Day = int.Parse(Console.ReadLine());

                        }
                    } while (Day < 1 || Day > 28);
                }
            }

            else if (Month == 03 || Month == 3)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());                    
                    }
                } while (Day < 1 || Day > 31);
            }

            else if (Month == 04 || Month == 4)
            {
                do
                {
                    if (Day < 1 || Day > 30)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine()); 
                    }
                } while (Day < 1 || Day > 30);
            }

            else if (Month == 05 || Month == 5)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 31);
            }

            else if (Month == 06 || Month == 6)
            {
                do
                {
                    if (Day < 1 || Day > 30)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 30);
            }

            else if (Month == 07 || Month == 7)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 31);
            }

            else if (Month == 08 || Month == 8)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 31);
            }

            else if (Month == 09 || Month == 9)
            {
                do
                {
                    if (Day < 1 || Day > 30)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 30);
            }

            else if (Month == 10)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 31);
            }

            else if (Month == 11)
            {
                do
                {
                    if (Day < 1 || Day > 30)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 30);
            }

            else if (Month == 12)
            {
                do
                {
                    if (Day < 1 || Day > 31)
                    {
                        Console.WriteLine("Podaj poprawną datę\n");
                        Day = int.Parse(Console.ReadLine());
                    }
                } while (Day < 1 || Day > 31);
            }


            if (Day < 10 && Month < 10)
            {
                Console.WriteLine("0" + Day + "." + "0" + Month + "." + Year);
            }
            else if (Month < 10)
            {
                Console.WriteLine(Day + "." + "0" + Month + "." + Year);
            }
            else if (Day < 10)
            {
                Console.WriteLine("0" + Day + "." + Month + "." + Year);
            }
            else
            {
                Console.WriteLine(Day + "." + Month + "." + Year);
            }
        }
        public void Exercise7()
        {
            Console.WriteLine("Podaj temperature: ");
            int temperature = int.Parse(Console.ReadLine());

            if (temperature >= 30)
            {
                Console.WriteLine("Gorąco");
            }
            else if (temperature <= 29 && temperature >= 20)
            {
                Console.WriteLine("Ciepło");
            }
            else if (temperature <= 19 && temperature >= 10)
            {
                Console.WriteLine("Norma");
            }
            else if (temperature <= 9 && temperature >= 0)
            {
                Console.WriteLine("Chłodno");
            }
            else if (temperature <= -1)
            {
                Console.WriteLine("Zimno");
            }
        }
    }
}
