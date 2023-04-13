using SchoolApp.Database;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using SchoolApp.Database.Entities;

namespace SchoolApp
{
    class School
    {
        private SchoolDatabase schoolDatabase = new SchoolDatabase();

        public void Run()
        {
            while(true)
            {
                ShowMenu();

                Console.WriteLine("Wybierz: ");
                if (int.TryParse(Console.ReadLine(), out int option))
                continue;

                switch (option)
                {
                    case 1:
                        //uzupełnić metodę
                        break;
                    case 2:
                        //uzupełnić metodę
                        break;
                    case 3:
                        //uzupełnić metodę
                        break;
                    case 4:
                        //uzupełnić metodę
                        break;

                    case 0:
                        return;
                }
            }
        }
        public void ShowMenu()
        {
            Console.Clear();
            Console.WriteLine("Lista dostępnych opcji: ");
            //CRUD
            Console.WriteLine("1. Dodanie nowej klasy."); //C - create
            Console.WriteLine("2. Usunięcie klasy.");
            Console.WriteLine("3. Modyfikacja klasy.");
            Console.WriteLine("4. Wyświetlenie wszystkich klas.");

            Console.WriteLine("0. Koniec programu.");
        }

        #region Metody do pracy na tebeli SchoolClasses

        private void AddNewSchoolClass()
        {
            Console.WriteLine("Podaj nazwę klasy: ");
            string className = Console.ReadLine();

            SchoolClass schoolClass = new SchoolClass()
            {
                Name = className
            };
            schoolDatabase.SchoolClasses.Add(schoolClass);
            schoolDatabase.SaveChanges();
        }
        #endregion
    }
}
