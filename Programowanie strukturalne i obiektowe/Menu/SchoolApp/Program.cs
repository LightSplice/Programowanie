using SchoolApp.Database;
using SchoolApp.Database.Entities;
using System;
using System.Collections.Generic;
using System.Linq;


namespace SchoolApp
{
    class Program
    {
        static void Main(string[] args)
        {
            SchoolDatabase schoolDatabase = new SchoolDatabase();

            SchoolClass schoolClass = new SchoolClass();
            schoolClass.Id = 1;
            schoolClass.Name = "1A";

            schoolDatabase.SchoolClasses.Add(schoolClass);

            schoolClass = new SchoolClass()
            {
                Id = 2,
                Name = "1B"
            };
            schoolDatabase.SchoolClasses.Add(schoolClass);

            schoolClass = new SchoolClass()
            {
                Id = 3,
                Name = "1C"
            };
            schoolDatabase.SchoolClasses.Add(schoolClass);

            schoolClass = new SchoolClass()
            {
                Id = 4,
                Name = "2C"
            };
            schoolDatabase.SchoolClasses.Add(schoolClass);

            Console.WriteLine("Lista klas w szkole:");
            foreach (var item in schoolDatabase.SchoolClasses)
            {
                Console.WriteLine(item.Id + " " + item.Name);
            }

            /*
             select *
             from SchoolClasses
             where Nazwa like '%C'
            */
            List<SchoolClass> classWithC = new List<SchoolClass>();
            foreach (SchoolClass item in schoolDatabase.SchoolClasses)
            {
                if (item.Name.EndsWith("C"))
                    classWithC.Add(item);
            }

            Console.WriteLine("Klasy kończące się na literę 'C'");
            foreach (var item in classWithC)
            {
                Console.WriteLine(item.Id + " " + item.Name);
            }

            classWithC = schoolDatabase
                .SchoolClasses
                .Where((SchoolClass sc) => /*return */sc.Name.EndsWith("C"))
                .ToList();
            Console.WriteLine("Klasy kończące się na literę 'C' uzyskane za pomocą metody LINQ");
            foreach (var item in classWithC)
            {
                Console.WriteLine(item.Id + " " + item.Name);
            }
        }
    }
}