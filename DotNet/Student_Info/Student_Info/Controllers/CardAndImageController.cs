using AspNetCoreGeneratedDocument;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Student_Info.Data;
using Student_Info.Models.Domain;
using Student_Info.Models.ViewModel;

namespace Student_Info.Controllers
{
    public class CardAndImageController(StudentDbContext context) : Controller
    {
        private readonly StudentDbContext _studentDbContext = context;
        [HttpGet]
        public IActionResult InputForm()
        {
            return View();
        }
        [HttpPost]
        public async Task<IActionResult> InputForm(StudentDetailModel student)
        {
            if (!ModelState.IsValid)
            {
                var errors = ModelState.Values.SelectMany(x => x.Errors).Select(x => x.ErrorMessage).ToList();
                ViewBag.Errors = errors;
                return View(student);
            }
            if (student.ImageFile != null)
            {
                using var ms = new MemoryStream();
                IFormFile? imageFile = student.ImageFile;
                await imageFile.CopyToAsync(ms);
                student.Image = ms.ToArray();
            }
            await _studentDbContext.AddAsync(student);
            await _studentDbContext.SaveChangesAsync();
            return RedirectToAction("ShowList");

        }

        public async Task<IActionResult> ShowList()
        {
            var studentList = await _studentDbContext.StudentsDetails.ToListAsync();
            var viewList = studentList.Select(student => new ViewingModel
            {
                Id = student.Id,
                Name = student.Name,
                Gender = student.Gender,
                Address = student.Address,
                DOB = student.DOB,
                Grade = student.Grade,
                Image = student.Image,

            }).ToList();

            return View(viewList);
        }
        [HttpGet]
        public async Task<IActionResult> Edit(int id)
        {
            var student = await _studentDbContext.StudentsDetails.FindAsync(id);
            if (student == null) return NotFound();
            return View(student);
        }
        [HttpPost]
        public async Task<IActionResult> Edit(StudentDetailModel student)
        {
            var newStudent = await _studentDbContext.StudentsDetails.FindAsync(student.Id);
            if (!ModelState.IsValid || newStudent == null)
                return View(student);
            if (student.ImageFile != null)
            {
                using var ms = new MemoryStream();
                IFormFile? imageFile = student.ImageFile;
                await imageFile.CopyToAsync(ms);
                newStudent.Image = ms.ToArray();
            }
            newStudent.Address = student.Address;
            newStudent.Name = student.Name;
            newStudent.Gender = student.Gender;
            newStudent.DOB = student.DOB;
            newStudent.Grade = student.Grade;
            await _studentDbContext.SaveChangesAsync();
            return RedirectToAction("ShowList");
        }
        public async Task<IActionResult> Delete(int id)
        {
            var student = await  _studentDbContext.StudentsDetails.FindAsync(id);
            if (student == null) return NotFound();
            _studentDbContext.StudentsDetails.Remove(student);
            await _studentDbContext.SaveChangesAsync();
            return RedirectToAction("ShowList");

        }
    }
}
