﻿using System;
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
            bool Pierwsza = true;
            Console.WriteLine("Podaj liczbę pierwszą");
            int number = int.Parse(Console.ReadLine());

            if (number < 2)
            {
                Console.WriteLine("Liczba nie może być mniejsza od 2");
            }
            
            for (int i = 2; i < number; i++)
            {
                if (number % i == 0)
                {
                    Pierwsza = false;
                }
                else
                {
                    Pierwsza = true;
                }
            }

            if (Pierwsza == true)
            {
                Console.WriteLine("Liczba jest liczbą pierwszą");
            }
            else if (Pierwsza == false)
            {
                Console.WriteLine("Liczba nie jest liczbą pierwszą");
            }
        }
        public void Exercise2()
        {
            Console.WriteLine("Podaj wyraz: ");
            string word = Console.ReadLine();
            string reverseWord = "";

            for (int i = word.Length - 1; i >= 0; i--)
            {
                reverseWord = reverseWord + word[i];
            }

            Console.WriteLine("Od tyłu: " + reverseWord);

            if (word == reverseWord)
            {
                Console.WriteLine("To jest palindrom");
            }

            else
            {
                Console.WriteLine("To nie jest palindorm");
            }
        }
        public void Exercise3()
        {
            bool letters;
            Console.WriteLine("Podaj słowo: ");
            string word = Console.ReadLine();
            Console.WriteLine("Podaj drugie słowo: ");
            string word2 = Console.ReadLine();

            if (word.Length != word2.Length)
            {
                do
                {
                    Console.WriteLine("Podaj słowo: ");
                    word = Console.ReadLine();
                    Console.WriteLine("Podaj drugie słowo: ");
                    word2 = Console.ReadLine();

                    if (word.Length != word2.Length)
                    {
                        letters = false;
                    }
                    else
                        letters = true;
                } while (letters == false);
            }

            Console.WriteLine(word + " , " + word2);
            
            for (int i = word.Length; ; )
            {

            }
        }
    }
}
