using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace PropertiesApp
{
    class Person
    {
        private string name;

        private string surname;
        public string Surname
        {
            get
            {
                return surname;
            }
        }

        public int age;
        public int Age
        {
            set
            {
                if (value > -1 && value <= 150)
                {
                    age = value;
                }
            }
            get
            {
                return age;
            }
        }

        public Person()
        {
            name = "Jan";
            surname = "Kowalski";
            age = 25;
        }

        public void SetAge(int age)
        {
            if (age >- 1 && age <= 150)
            {
                this.age = age;
            }
            else
            {
                //
            }
        }
        public int GetAge()
        {
            return age;
        }
    }
}
