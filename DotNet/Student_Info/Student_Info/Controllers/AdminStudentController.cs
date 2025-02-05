using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Student_Info.Data;
using Student_Info.Models.Domain;
using Student_Info.Models.ViewModel;

namespace Student_Info.Controllers
{
    public class AdminStudentController : Controller
    {
        private StudentDbContext _studentDbContext;
        public AdminStudentController(StudentDbContext studentModel)
        {
            _studentDbContext = studentModel;
        }
        [HttpGet]
        public IActionResult AddStudent()
        {
            return View();
        }
        [HttpPost]
        public async Task<IActionResult> AddStudent(AddStudentRequest addStudentRequest)
        {
            var student = new StudentModel
            {
                StudentName = addStudentRequest.StudentName,
                Department = addStudentRequest.Department,
                StudentPhone = addStudentRequest.StudentPhone,
                Session = addStudentRequest.Session
            };
            await _studentDbContext.Students.AddAsync(student);
            await _studentDbContext.SaveChangesAsync();


            return RedirectToAction("ShowStudentList");
        }
        public async Task<IActionResult> ShowStudentList()
        {
            var allStudents = await _studentDbContext.Students.ToListAsync();
            return View(allStudents);
        }
        [HttpGet]
        public async Task<IActionResult> EditStudent(int id)
        {
            var student = await _studentDbContext.Students.FirstOrDefaultAsync(x => x.StudentId == id);
            if (student != null)
            {
                var editStudent = new EditStudentRequest
                {
                    StudentId = student.StudentId,
                    StudentName = student.StudentName,
                    Department = student.Department,
                    StudentPhone = student.StudentPhone,
                    Session = student.Session
                };
                return View(editStudent);
            }

            return View(null);
        }
        [HttpPost]
        public async Task<IActionResult> EditStudent(EditStudentRequest editedStudent)
        {
            var student = new StudentModel
            {
                StudentId = editedStudent.StudentId,
                StudentName = editedStudent.StudentName,
                Department = editedStudent.Department,
                StudentPhone = editedStudent.StudentPhone,
                Session = editedStudent.Session

            };
            var existingStudent = await _studentDbContext.Students.FindAsync(student.StudentId);
            if (existingStudent != null)
            {
                existingStudent.StudentName = student.StudentName;
                existingStudent.Department = student.Department;
                existingStudent.StudentPhone = student.StudentPhone;
                existingStudent.Session = student.Session;

                await _studentDbContext.SaveChangesAsync();

            }

            return RedirectToAction("ShowStudentList");
        }
        [HttpPost]
        public async Task<IActionResult> DeleteStudent(EditStudentRequest editStudent)
        {
            var student = await _studentDbContext.Students.FindAsync(editStudent.StudentId);
            if (student != null)
            {
                _studentDbContext.Students.Remove(student);
                await _studentDbContext.SaveChangesAsync();
            }
            return RedirectToAction("ShowStudentList");
        }

    }
}
