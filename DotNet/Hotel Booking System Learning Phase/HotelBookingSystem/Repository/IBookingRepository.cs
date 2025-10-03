using HotelBookingSystem.DataBase;
using HotelBookingSystem.Models.Domain;

namespace HotelBookingSystem.Repository
{
    public interface IBookingRepository
    {
        Task<IEnumerable<BookingModel>> GetAllBookings();
        Task <BookingModel> GetBookingById(int id);
        Task AddBooking(BookingModel booking);


    }
}
