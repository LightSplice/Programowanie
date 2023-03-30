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

            Person person = new Person("Jan", "Kowalski", 40, "pełna essa", 170);
            listOfPeople.Add(person);

            listOfPeople.Add(new Person("Ewa", "Nowak", 15, "zero essy", 180));
            listOfPeople.Add(new Person("Paweł", "Nieznany", 15, "nawet essa jest", 190));
            listOfPeople.Add(new Person("Bez", "Imeinny", 14, "Giga Chad", 200));

            Console.WriteLine("Lista wszystkich osób");
            foreach(Person p in listOfPeople)
            {
                p.Info();
            }

            List<Person> listOfPeoplePegi18;

            /*
            select *
            from listOfPeople
            where age >= 18
            */

            listOfPeoplePegi18 = listOfPeople.Where(x => x.age >= 18).ToList();

            Console.WriteLine("Lista osób pełnoletnich");
            foreach (Person p in listOfPeoplePegi18)
            {
                p.Info();
            }

            /*
            select *
            from listOfPeople
            join kolejna_lista y on x.id = y.id
            where x.Age = 15
            or y.JakieśPole > 80
            and x.name like '%a'
            groupby x.name
            order by age desc, height
            */

            //List<Person> ppp = listOfPeople.Join(listOfPeoplePegi18, x => x.age, x18 => x18.age, (Person p, Person p18) => new Person(person.name, person p18) p18.name);

            //List<Person> sortedListByAge = listOfPeople.OrderBy(x => x.age).ToList();
            List<Person> sortedListByAgeAndHeight = listOfPeople.OrderByDescending(x => x.age).ThenBy(x => x.height).ToList();
            Console.WriteLine("List osób posortowana wedłóg wieku: ");
            foreach(Person p in sortedListByAgeAndHeight)
            {
                p.Info();
            }
            Console.WriteLine();

            List<Person> sortedListByName = listOfPeople.OrderBy(x => x.name).ToList();
            Console.WriteLine("List osób posortowana wedłóg imienia: ");
            foreach (Person p in sortedListByName)
            {
                p.Info();
            }
            Console.WriteLine();

            int age = listOfPeople.Min(x => x.age);
            Console.WriteLine("Najmłodsza osoba ma wiek: " + age);

            bool isLegalAge = listOfPeople.All(x => x.age < 18);
            Console.WriteLine("Czy wszystkie osoby są pełnoletnie: " + isLegalAge);
        }
    }
}
