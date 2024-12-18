namespace Student_Info.Models.ViewModel
{
    public class EditStudentRequest
    {
        public int StudentId { get; set; }
        public string? StudentName { get; set; }
        public string? Department { get; set; }
        public string? StudentPhone { get; set; }
        public string? Session { get; set; }

    }
}
