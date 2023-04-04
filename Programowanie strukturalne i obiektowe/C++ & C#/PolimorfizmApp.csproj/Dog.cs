using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolimorfizmApp
{
    class Dog : Animal
    {
        private string name;

        public Dog(string dogName)
        {
            name = dogName;
        }

        public void Bark()
        {
            Console.WriteLine($"Pies o imieniu {name} szczeka.");
        }

        public override void ShowInfo()
        {
            Console.WriteLine("-------------------------------");
            Console.WriteLine("Obiekt klasy Dog.");
            Console.WriteLine($"Pies o imieniu {name}");
            Console.WriteLine("-------------------------------");
        }
    }
}