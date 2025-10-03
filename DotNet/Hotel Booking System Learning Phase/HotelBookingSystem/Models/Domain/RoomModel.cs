using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace HotelBookingSystem.Models.Domain
{
    public class RoomModel
    {
        [Key]
        public int RoomId { get; set; }
        public int RoomNumber { get; set; }
        public string RoomType { get; set; }
        public string RoomStatus { get; set; }
        public string RoomDescription { get; set; }
        public string RoomImage { get; set; }
        public int RoomCapacity { get; set; }
        public int MaxCapacity { get; set; }
        [Required]
        [Column(TypeName = "decimal(18, 2)")]
        public decimal PricePerNigh { get; set; }
        public bool IsAvailable { get; set; }

        public int HotelId { get; set; }
        [ForeignKey("HotelId")]
        public virtual HotelModel Hotel { get; set; }
        public virtual ICollection<BookingModel> Bookings { get; set; }






    }
}
