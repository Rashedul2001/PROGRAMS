using System.ComponentModel.DataAnnotations;

namespace HotelBookingSystem.Models.Domain
{
    public class UserModel
    {
        [Key]
        public int UserId { get; set; }
        public string UserName { get; set; }
        public string UserPhone { get; set; }
        public string UserEmail { get; set; }
        public string UserPassword { get; set; }
        public string UserAddress { get; set; }
        public DateOnly UserDOB { get; set; }
        public string UserNID { get; set; }
        public string UserGender { get; set; }

        public string UserRole { get; set; }

        public string UserImage { get; set; }
        public DateTime CreatedAt { get; set; } = DateTime.Now;
        public virtual ICollection<BookingModel> Bookings { get; set; }
        public virtual ICollection<PaymentModel> Payments { get; set; }
        public virtual ICollection<ReviewModel> Reviews { get; set; }

    }
}
