using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolimorfizmApp
{
    class Cat : Animal
    {
        private string name;
        public Cat(string catName)
        {
            name = catName;
        }

        public void Meow()
        {
            Console.WriteLine($"Kot o imieniu {name} miałczy");
        }

        public override void ShowInfo()
        {
            Console.WriteLine("-------------------------------");
            Console.WriteLine("Obiekt klasy Cat.");
            Console.WriteLine($"Kot o imieniu {name}");
            Console.WriteLine("-------------------------------");
        }
    }
}