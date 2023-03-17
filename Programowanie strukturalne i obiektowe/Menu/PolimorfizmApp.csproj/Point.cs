using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PolimorfizmApp
{
    class Point
    {
        private int x, y;

        public Point(int x, int y)
        {
            this.x = x;
            this.y = y;
        }

        public void ShowInfo()
        {
            Console.WriteLine("-------------------------------");
            Console.WriteLine("Obiekt klasy Point.");
            Console.WriteLine($"Współrzędna punktu({x},{y})");
            Console.WriteLine("-------------------------------");
        }
    }
}