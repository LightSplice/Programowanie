using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace FirstObjectProgramCS
{
    class Person
    {
        private string name;
        private string surname;
        private int age;

        public Person()
        {
            name = "Jan";
            surname = "Nieznany";
            age = 21;
        }

        public Person(string name, string surname, int age)
        {
            this.name = name;
            this.surname = surname;
            this.age = age;
        }

        public void ShowInfo()
        {
            Console.WriteLine("Informacja o osobie: ");
            Console.WriteLine($"Imie: {name}");
            Console.WriteLine($"Nazwisko: {surname}");
            Console.WriteLine($"Wiek: {age}");
        }
    }
}
