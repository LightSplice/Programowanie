using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ConsoleApp
{
    class TestListOfObject
    {
        public void Test()
        {
            List<Person> listOfPeople = new List<Person>();

            Person person = new Person("Jan", "Kowalski", 40, "pełna essa");
            listOfPeople.Add(person);

            listOfPeople.Add(new Person("Ewa", "Nowak", 36, "zero essy"));
            listOfPeople.Add(new Person("Paweł", "Nieznany", 15, "nawet essa jest"));
            listOfPeople.Add(new Person("Bez", "Imeinny", 14, "Giga Chad"));

            Console.WriteLine("Lista wszystkich osób");
            foreach(Person p in listOfPeople)
            {
                p.Info();
            }

            List<Person> listOfPeoplePegi18;

            listOfPeoplePegi18 = listOfPeople.Where(x => x.age >= 18).ToList();

            Console.WriteLine("Lista osób pełnoletnich");
            foreach (Person p in listOfPeoplePegi18)
            {
                p.Info();
            }
        }


    }
}
