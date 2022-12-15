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
        public int height;

        public Person(string name, string surname, int age, string essa, int height)
        {
            this.name = name;
            this.surname = surname;
            this.age = age;
            this.essa = essa;
            this.height = height;
        }

        public void Info()
        {
            Console.WriteLine(name + " " + surname + " " + age + " " + "lat" + ", " + essa + ", " + height);
        }
    }
}
