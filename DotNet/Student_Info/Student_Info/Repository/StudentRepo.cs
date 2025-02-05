using Student_Info.Models.Domain;
using Microsoft.EntityFrameworkCore;
using Student_Info.Data;
namespace Student_Info.Repository
{
    public class StudentRepo
    {
        public StudentDbContext _studentDbContext;

        StudentRepo(StudentDbContext studentDbContext)
        {
            _studentDbContext = studentDbContext;
        }
        public async Task<IEnumerable<StudentModel>> GetAllStudentAsync()
        {
            return await _studentDbContext.Students.ToListAsync();
        }
        public async Task<StudentModel?> GetStudentByIdAsync(int id)
        {
            return await _studentDbContext.Students.FirstOrDefaultAsync(x => x.StudentId == id);
        }
        public async Task<StudentModel> AddStudentAsync(StudentModel student)
        {
            await _studentDbContext.Students.AddAsync(student);
            await _studentDbContext.SaveChangesAsync();
            return student;
        }
        public async Task<StudentModel> UpdateStudentAsync(StudentModel student)
        {
            _studentDbContext.Students.Update(student);
            await _studentDbContext.SaveChangesAsync();
            return student;
        }
        public async Task<StudentModel>  DeleteStudentAsync(int id)
        {
            var student = await _studentDbContext.Students.FirstOrDefaultAsync(x => x.StudentId == id);
            if (student != null)
            {
                _studentDbContext.Students.Remove(student);
                await _studentDbContext.SaveChangesAsync();
            }
            return student;
        }

    }
}
