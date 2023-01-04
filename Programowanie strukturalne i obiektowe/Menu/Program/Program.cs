using System;
using ShapeConsoleApp.Shapes;

namespace ShapeConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Rectangle firstRectangle = new Rectangle("Prostokąt 1");
            firstRectangle.ShowInfo();

            Rectangle secondRectangle = new Rectangle("Prostokąt 2",54, 99);
            secondRectangle.ShowInfo();

            Square firstSquare = new Square("Kwadrat Marcin");
            firstSquare.ShowInfo();

            Tetragon firstTetragon;
            if (new Random().Next() % 2 == 0)
            {
                firstTetragon = new Square("Kolejny Kwadrat", 5);
            }
            else
            {
                firstTetragon = new Rectangle("Kolejny Prostokąt", 5, 7);
            }
            double area = firstTetragon.Area();
            Console.WriteLine("Pole tetragon " + area);

            firstTetragon.ShowInfo();
        }
    }
}