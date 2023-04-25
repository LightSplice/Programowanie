using Microsoft.EntityFrameworkCore;
using SchoolApp.Database.Entities;
using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace SchoolApp.Database
{
    //add-migration CreateDatabaseMigration -outputdir Database/Migrations
    //update-database
    class SchoolDatabase : DbContext
    {
        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.UseSqlite("FileName=schoolDatabase.db");

            base.OnConfiguring(optionsBuilder);
        }

        public DbSet<SchoolClass> SchoolClasses { get; set; }
        public DbSet<Student> Students { get; set; }
    }
}