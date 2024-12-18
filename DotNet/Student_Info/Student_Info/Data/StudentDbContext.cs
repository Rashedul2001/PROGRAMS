using Microsoft.EntityFrameworkCore;
using Student_Info.Models.Domain;

namespace Student_Info.Data
{
    public class StudentDbContext : DbContext
    {
        public StudentDbContext(DbContextOptions<StudentDbContext> options) : base(options)
        {
        }
        public DbSet<StudentModel> Students { get; set; }
    }
}
