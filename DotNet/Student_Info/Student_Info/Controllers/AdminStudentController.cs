using System.ComponentModel.DataAnnotations;
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
        public IActionResult AddStudent(AddStudentRequest addStudentRequest)
        {
            var student = new StudentModel {
                StudentName = addStudentRequest.StudentName,
                Department = addStudentRequest.Department,
                StudentPhone = addStudentRequest.StudentPhone,
                Session = addStudentRequest.Session
            };
            _studentDbContext.Students.Add(student);
            _studentDbContext.SaveChanges();


            return RedirectToAction("ShowStudentList");
        }
        public IActionResult ShowStudentList()
        {
            var allStudents = _studentDbContext.Students.ToList();
            return View(allStudents);
        }
        [HttpGet]
        public IActionResult  EditStudent(int id)
        {
            var student = _studentDbContext.Students.FirstOrDefault(x => x.StudentId == id);
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
        public IActionResult EditStudent(EditStudentRequest editedStudent)
        {
            var student = new StudentModel
            {
                StudentId = editedStudent.StudentId,
                StudentName = editedStudent.StudentName,
                Department = editedStudent.Department,
                StudentPhone = editedStudent.StudentPhone,
                Session = editedStudent.Session

            };
            var existingStudent = _studentDbContext.Students.Find(student.StudentId);
            if (existingStudent != null)
            {
                existingStudent.StudentName = student.StudentName;
                existingStudent.Department = student.Department;
                existingStudent.StudentPhone = student.StudentPhone;
                existingStudent.Session = student.Session;

                _studentDbContext.SaveChanges();

            }

            return RedirectToAction("ShowStudentList");
        }
        [HttpPost]
        public IActionResult DeleteStudent(EditStudentRequest editStudent)
        {
            var student = _studentDbContext.Students.Find(editStudent.StudentId);
            if (student != null)
            {
                _studentDbContext.Students.Remove(student);
                _studentDbContext.SaveChanges();
            }
            return RedirectToAction("ShowStudentList");
        }

    }
}
