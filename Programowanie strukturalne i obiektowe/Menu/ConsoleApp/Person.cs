using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp
{
    class Person
    {
        public string name;
        public string surname;
        public int age;
        public string essa;

        public Person(string name, string surname, int age, string essa)
        {
            this.name = name;
            this.surname = surname;
            this.age = age;
            this.essa = essa;
        }

        public void Info()
        {
            Console.WriteLine(name + " " + surname + " " + age + "lat" + " " + essa);
        }
    }
}
