using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace HotelBookingSystem.Models.Domain
{
    public class ReviewModel
    {
        [Key]
        public int ReviewId { get; set; }
        [Required]
        [Range(1, 5)]
        public int ReviewRating { get; set; }
        [StringLength(500)]
        public string ReviewDescription { get; set; }
        public DateTime ReviewDateTime { get; set; }

        public int UserId { get; set; }
        public int HotelId { get; set; }

        [ForeignKey("UserId")]
        public UserModel User { get; set; }
        [ForeignKey("HotelId")]
        public HotelModel Hotel { get; set; }


    }
}
