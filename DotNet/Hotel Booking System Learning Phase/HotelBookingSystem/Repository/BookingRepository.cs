using System.Runtime.CompilerServices;
using HotelBookingSystem.DataBase;
using HotelBookingSystem.Models.Domain;
using Microsoft.EntityFrameworkCore;

namespace HotelBookingSystem.Repository
{
    public class BookingRepository(HotelBookingContext context) : IBookingRepository
    {
        private readonly HotelBookingContext _context = context;

        public async Task  AddBooking(BookingModel booking)
        {
            await _context.Bookings.AddAsync(booking);
            await _context.SaveChangesAsync();
        }

        public async Task<IEnumerable<BookingModel>> GetAllBookings()
        {
            return await _context.Bookings.Include(b => b.User).ToListAsync();
        }
        public async Task<BookingModel> GetBookingById(int id)
        {
            return await _context.Bookings.Include(b => b.User).FirstOrDefaultAsync(m => m.BookingId == id);
        }


    }
}
