using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace Student_Info.Models.Domain
{
    public class StudentDetailModel
    {
        [Key] public int Id { get; set; }
        [Required]
        [StringLength(50)]
        public required string Name { get; set; }
        [Required]
        [StringLength(10)]
        public required string Gender { get; set; }
        [Required]
        public required string Address { get; set; }
        [Required]
        [DataType(DataType.Date)]
        [Display(Name = "Date of Birth")]
        public required DateOnly DOB { get; set; }
        [Required]
        public required char Grade { get; set; }

        [Display(Name = "Profile Image")]
        public  byte[]? Image { get; set; }

        [NotMapped]
        [Display(Name = "Upload Image")]
        public  IFormFile? ImageFile { get; set; }

    }
}
