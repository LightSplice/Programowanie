using System;

namespace ExceptionApp
{
    class MyException : Exception
    {
        public int MojaWartość { get; set; }
        public MyException() : base("Komunikat")
        {

        }
    }


    class Program
    {
        static int Divide(int a, int b)
        {
            int w = 0;
            if (b != 0)
                w = a / b;
            else
            {
                MyException myException = new MyException();
                myException.MojaWartość = b;
                throw myException;
            }
            return w;
        }

        static void Main(string[] args)
        {
            try
            {
                int firstNumber, secondNumber, divNumber;

                Console.WriteLine("Podaj pierwszą liczbę");
                firstNumber = int.Parse(Console.ReadLine());

                Console.WriteLine("Podaj drugą liczbę");
                secondNumber = int.Parse(Console.ReadLine());

                //divNumber = firstNumber / secondNumber;
                divNumber = Divide(firstNumber, secondNumber);

                Console.WriteLine("Wynik dzielenia " + divNumber);
            }
            catch (FormatException ex)
            {
                Console.WriteLine("Obsługa z FormatException");
                Console.WriteLine(ex.Message);
                Console.WriteLine(ex.StackTrace);
            }
            catch (MyException ex)
            {
                Console.WriteLine(ex.MojaWartość);
            }
            catch (Exception ex)
            {
                Console.WriteLine(ex.Message);
                Console.WriteLine(ex.StackTrace);
            }


        }
    }
}