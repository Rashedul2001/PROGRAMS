
using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;
namespace HotelBookingSystem.Models.Domain
{
    public class BookingModel
    {
        [Key]
        public int BookingId { get; set; }
        [Required]
        [Column(TypeName = "decimal(18, 2)")]
        public decimal TotalPrice { get; set; }
        public DateTime BookingDateTime { get; set; }
        public DateTime CheckInDateTime { get; set; }
        public DateTime CheckOutDateTime { get; set; }
        public int TotalPerson { get; set; }
        public int TotalDays { get; set; }
        public string PaymentType { get; set; }
        public string BookingStatus { get; set; }
        public DateTime BookingDate { get; set; }

        public string SpecialRequests { get; set; }


        //Foreign Keys
        public int UserId { get; set; }
        public int RoomId { get; set; }

        // Navigation Properties
        [ForeignKey("UserId")]
        public virtual UserModel User { get; set; }
        [ForeignKey("RoomId")]
        public virtual RoomModel Room { get; set; }
        public virtual ICollection<PaymentModel> Payments { get; set; }


    }
}
