using System.ComponentModel.DataAnnotations.Schema;
using System.ComponentModel.DataAnnotations;

namespace Student_Info.Models.ViewModel
{
    public class ViewingModel
    {
         public int Id { get; set; }
        public required string Name { get; set; }
        public required string Gender { get; set; }
        public required string Address { get; set; }
        public required DateOnly DOB { get; set; }
        public required char Grade { get; set; }
        public  byte[]? Image { get; set; }
    }
}
