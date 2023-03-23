using SchoolApp.Database.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SchoolApp.Database
{
    class SchoolDatabase
    {
        public List<SchoolClass> SchoolClasses { get; set; } = new List<SchoolClass>();
    }
}