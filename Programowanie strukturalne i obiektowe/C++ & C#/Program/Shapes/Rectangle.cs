using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ShapeConsoleApp.Shapes
{
    class Rectangle : Tetragon
    {
        protected double sideA;
        protected double sideB;

        public Rectangle(string name) : base(name, 21,37,21,37)
        {
        }

        public Rectangle(string name, double sideA, double sideB) : base(name, sideA,sideB,sideA,sideB)
        {
        }

        new public double Area()
        {
            return sideA * sideB;
        }
    }
}
