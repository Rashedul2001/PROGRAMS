using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace Student_Info.Models.Domain
{
    public class StudentModel
    {
        [Key]
        public int StudentId { get; set; }
        public string? StudentName { get; set; }
        public string? Department { get; set; }
        public string? StudentPhone { get; set; }
        public string? Session { get; set; }
    }
}
