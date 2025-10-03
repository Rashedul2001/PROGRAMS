using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace HotelBookingSystem.Models.Domain
{
    public class PaymentModel
    {
        [Key]
        public int PaymentId { get; set; }
        [Required]
        [Column(TypeName = "decimal(18,2)")]
        public decimal PaymentAmount { get; set; }
        [Required]
        public string PaymentMethod { get; set; }

        public DateTime PaymentDateTime { get; set; }
        public string PaymentStatus { get; set; }
        [Required]
        public string TransactionId { get; set; }
        public int UserId { get; set; }
        public int BookingId { get; set; }

        [ForeignKey("UserId")]
        public virtual UserModel User { get; set; }
        [ForeignKey("BookingId")]
        public virtual BookingModel Booking { get; set; }
    }
}
