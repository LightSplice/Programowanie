using System;

namespace PropertiesApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Person person = new Person();

            //person.age = 150598;
            person.SetAge(15098);
            person.SetAge(68);
            person.Age = 68;

            //int age = person.age;
            int age = person.GetAge();
        }
    }
}
