using System;
using ShapeConsoleApp.Shapes;

namespace ShapeConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Rectangle firstRectangle = new Rectangle();
            firstRectangle.ShowInfo();

            Rectangle secondRectangle = new Rectangle(54, 99);
            secondRectangle.ShowInfo();

            Square firstSquare = new Square();
            firstSquare.ShowInfo();
        }
    }
}