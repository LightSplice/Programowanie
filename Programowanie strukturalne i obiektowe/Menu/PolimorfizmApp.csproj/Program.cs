using System;

namespace PolimorfizmApp
{
    class Program
    {
        static void Main(string[] args)
        {
            Dog dog = new Dog("Burek");
            Dog secondDog = new Dog("Gryzek");
            Cat cat = new Cat("Puszek");

            Animal animal = new Animal();

            //secondDog = dog;
            //cat = dog; // tutaj jest błąd
            //animal = dog;
            //animal = cat;
            //dog = animal;  // tutaj jest błąd

            dog.Bark();
            secondDog.Bark();
            cat.Meow();

            dog.ShowInfo();
            cat.ShowInfo();

            InfoAboutDog(dog);
            InfoAboutDog(secondDog);
            //InfoAboutDog(cat);

            InfoAbout(dog);
            InfoAbout(cat);

            Point point = new Point(4, 9);
            InfoAbout(point);

        }

        static void InfoAboutDog(Dog d)
        {
            d.ShowInfo();
        }

        static void InfoAbout(Animal a)
        {
            a.ShowInfo();
        }
    }
}