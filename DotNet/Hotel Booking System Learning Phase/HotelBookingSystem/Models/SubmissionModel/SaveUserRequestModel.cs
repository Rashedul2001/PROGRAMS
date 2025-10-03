namespace HotelBookingSystem.Models.SubmissionModel
{
    public class SaveUserRequestModel
    {
        public int UserId { get; set; }
        public string UserName { get; set; }
        public string UserPhone { get; set; }
        public string UserEmail { get; set; }
        public string UserPassword { get; set; }
        public string UserAddress { get; set; }
        public DateOnly UserDOB { get; set; }
        public string UserNID { get; set; }
        public string UserGender { get; set; }
        public string UserImage { get; set; }

    }
}
