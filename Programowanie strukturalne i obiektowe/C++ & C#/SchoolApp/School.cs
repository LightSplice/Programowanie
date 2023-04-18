using SchoolApp.Database;
using SchoolApp.Database.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SchoolApp
{
    class School
    {
        private SchoolDatabase schoolDatabase = new SchoolDatabase();

        public void Run()
        {
            while (true)
            {
                ShowMenu();

                Console.WriteLine("Wybierz:");
                if (!int.TryParse(Console.ReadLine(), out int option))
                    continue;

                switch (option)
                {
                    case 1:
                        AddNewSchoolClass();
                        break;
                    case 2:
                        DeleteSchoolClass();
                        break;
                    case 3:
                        ModifySchoolClass();
                        break;
                    case 4:
                        ShowAllSchoolClasses();
                        break;

                    case 0:
                        return;
                }
            }
        }

        public void ShowMenu()
        {
            Console.Clear();
            Console.WriteLine("Lista dostepnych opcji:");
            //CRUD
            Console.WriteLine("1. Dodanie nowej klasy."); //C - create
            Console.WriteLine("2. Usunięcie klasy.");   //D - delete
            Console.WriteLine("3. Modyfikacja klasy."); //U - update
            Console.WriteLine("4. Wyświetlenie wszystkich klas."); //R - read


            Console.WriteLine("0. Koniec programu.");
        }

        #region Metody do pracy na tabeli SchoolClasses

        private void AddNewSchoolClass()
        {
            Console.WriteLine("Podaj nazwę klasy");
            string className = Console.ReadLine();

            SchoolClass schoolClass = new SchoolClass()
            {
                Name = className
            };

            schoolDatabase.SchoolClasses.Add(schoolClass);
            schoolDatabase.SaveChanges();
        }

        private void ShowAllSchoolClasses()
        {
            Console.WriteLine("Wszystkie klasy:");
            /*
             select *
               from SchoolClasses
            */
            foreach (SchoolClass schoolClass in schoolDatabase.SchoolClasses)
            {
                Console.WriteLine(schoolClass.Id + " " + schoolClass.Name);
            }
            Console.ReadKey();
        }

        private void DeleteSchoolClass()
        {
            Console.WriteLine("Podaj id klasy do usunięcia");
            if (int.TryParse(Console.ReadLine(), out int idToDeleted))
            {
                /*
                 delete SchoolClasses
                  where id = idToDeleted
                 */

                /*
                 select *
                   from SchoolClasses
                  where id = idToDeleted
                 */
                SchoolClass schoolClassToDeleted = schoolDatabase
                                                    .SchoolClasses
                                                    .FirstOrDefault(sc => sc.Id == idToDeleted);
                if (schoolClassToDeleted != null)
                {
                    schoolDatabase.SchoolClasses.Remove(schoolClassToDeleted);
                    schoolDatabase.SaveChanges();
                    Console.WriteLine("Kasowanie zakończone sukcesem.");
                }
                else
                {
                    Console.WriteLine("Brak klasy w bazie to takim id");
                }
            }
            else
            {
                Console.WriteLine("Błąd parsowania. Nieprawidłowe dane.");
            }
            Console.ReadKey();
        }

        private void ModifySchoolClass()
        {
            Console.WriteLine("Podaj id klasy do modyfikacji");
            if (int.TryParse(Console.ReadLine(), out int idToModify))
            {
                SchoolClass schoolClassToModify = schoolDatabase
                                                    .SchoolClasses
                                                    .FirstOrDefault(sc => sc.Id == idToModify);
                if (schoolClassToModify != null)
                {
                    Console.WriteLine("Podaj nową nazwę klasy");
                    string newName = Console.ReadLine();

                    schoolClassToModify.Name = newName;
                    schoolDatabase.SaveChanges();
                    /*
                     update set Name =  newName
                    from schoolClassToModify
                    where id =idToModify
                     */
                    Console.WriteLine("Modyfikacja zakończona sukcesem.");
                }
                else
                {
                    Console.WriteLine("Brak klasy w bazie to takim id");
                }
            }
            else
            {
                Console.WriteLine("Błąd parsowania. Nieprawidłowe dane.");
            }
            Console.ReadKey();
        }
        #endregion
    }
}