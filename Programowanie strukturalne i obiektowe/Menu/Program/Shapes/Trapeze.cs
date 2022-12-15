using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace ShapeConsoleApp.Shapes
{
    class Trapeze : Tetragon
    {
        protected double height;

        public Trapeze(string name, double sideA, double sideB, double sideC, double sideD, double height) : base(name, sideA, sideB, sideC, sideD)
        {
            this.height = height;
        }

        new public double Area()
        {
            return (sideA + sideC) * height / 2;
        }
    }
}
