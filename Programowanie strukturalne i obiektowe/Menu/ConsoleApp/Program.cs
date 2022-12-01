using System;

namespace ConsoleApp
{
    class Program
    {
        static void Main(string[] args)
        {
            TestCollection testCollection = new TestCollection();
            testCollection.TestArrayCollection();
            testCollection.TestObjectArrayCollection();
            testCollection.ListCollection();

            TestListCollection testListCollection = new TestListCollection();
            testListCollection.FirstTest();
        }
    }
}
