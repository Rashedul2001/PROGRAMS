using Microsoft.EntityFrameworkCore;
using Student_Info.Models.Domain;

namespace Student_Info.Data
{
    public class StudentDbContext(DbContextOptions<StudentDbContext> options) : DbContext(options)
    {
        public DbSet<StudentModel> Students { get; set; }
        public DbSet<StudentDetailModel> StudentsDetails { get; set; }

    }
}
