using Student_Info.Models.Domain;
namespace Student_Info.Repository
{
    public interface IStudentRepo
    {
        Task<IEnumerable<StudentModel>> GetAllStudentAsync();
        Task<StudentModel?> GetStudentByIdAsync(int id);
        Task<StudentModel> AddStudentAsync(StudentModel student);
        Task<StudentModel?> UpdateStudentAsync(StudentModel student);
        Task<StudentModel?> DeleteStudentAsync(int id);

    }
}
