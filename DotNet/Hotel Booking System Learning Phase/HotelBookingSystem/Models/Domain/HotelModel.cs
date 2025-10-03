using System.ComponentModel.DataAnnotations;
using System.ComponentModel.DataAnnotations.Schema;

namespace HotelBookingSystem.Models.Domain
{
    public class HotelModel
    {
        [Key]
        public int HotelId { get; set; }
        public string Name { get; set; }
        public string Address { get; set; }
        public string Phone { get; set; }
        public string Description { get; set; }
        [Range(1, 5)]
        public int StarRating { get; set; }
        public string Image { get; set; }
        public virtual ICollection<RoomModel> Rooms { get; set; }
        public virtual ICollection<ReviewModel> Reviews { get; set; }



    }
}
