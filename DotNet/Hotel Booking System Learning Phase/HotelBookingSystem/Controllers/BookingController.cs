using HotelBookingSystem.Models.Domain;
using HotelBookingSystem.Repository;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Rendering;



namespace HotelBookingSystem.Controllers
{
    public class BookingController(IBookingRepository repo, IUserRepo repo2) : Controller
    {
        private readonly IBookingRepository bookingRepo = repo;
        private readonly IUserRepo userRepo = repo2;
        public async Task<IActionResult> Index()
        {
            var bookings = await bookingRepo.GetAllBookings();
            return View(bookings);
        }


        public async Task<IActionResult> Details(int id)
        {
            var booking =  await bookingRepo.GetBookingById(id);

            if (booking == null)
            {
                return NotFound();
            }

            return View(booking);
        }

        public async Task<IActionResult> Create()
        {
            var allUsers = await userRepo.GetAllUsersAsync();
            ViewData["UserId"] = new SelectList(allUsers, "UserId", "UserEmail");
            return View();
        }

        [HttpPost]
        [ValidateAntiForgeryToken]
        public async Task<IActionResult> Create([Bind("UserId,CheckInDate,CheckOutDate,TotalPrice,NumberOfGuests,SpecialRequests")] BookingModel booking)
        {
            if (ModelState.IsValid)
            {
                booking.BookingDate = DateTime.Now;
                booking.BookingStatus = "Pending";
                await bookingRepo.AddBooking(booking);
                return RedirectToAction(nameof(Index));
            }
            var allUsers = await userRepo.GetAllUsersAsync();
            ViewData["UserId"] = new SelectList(allUsers, "UserId", "Email", booking.UserId);
            return View(booking);
        }

        //// GET: Booking/Edit/5
        //public async Task<IActionResult> Edit(int? id)
        //{
        //    if (id == null)
        //    {
        //        return NotFound();
        //    }

        //    var booking = await _context.Bookings.FindAsync(id);
        //    if (booking == null)
        //    {
        //        return NotFound();
        //    }

        //    ViewData["UserId"] = new SelectList(_context.Users, "UserId", "Email", booking.UserId);
        //    ViewData["BookingStatuses"] = new SelectList(new[] { "Pending", "Confirmed", "Cancelled", "Completed" }, booking.BookingStatus);
        //    return View(booking);
        //}

        //// POST: Booking/Edit/5
        //[HttpPost]
        //[ValidateAntiForgeryToken]
        //public async Task<IActionResult> Edit(int id, [Bind("BookingId,UserId,CheckInDate,CheckOutDate,TotalPrice,BookingStatus,NumberOfGuests,SpecialRequests,BookingDate")] Booking booking)
        //{
        //    if (id != booking.BookingId)
        //    {
        //        return NotFound();
        //    }

        //    if (ModelState.IsValid)
        //    {
        //        try
        //        {
        //            _context.Update(booking);
        //            await _context.SaveChangesAsync();
        //        }
        //        catch (DbUpdateConcurrencyException)
        //        {
        //            if (!BookingExists(booking.BookingId))
        //            {
        //                return NotFound();
        //            }
        //            else
        //            {
        //                throw;
        //            }
        //        }
        //        return RedirectToAction(nameof(Index));
        //    }

        //    ViewData["UserId"] = new SelectList(_context.Users, "UserId", "Email", booking.UserId);
        //    ViewData["BookingStatuses"] = new SelectList(new[] { "Pending", "Confirmed", "Cancelled", "Completed" }, booking.BookingStatus);
        //    return View(booking);
        //}

        //// GET: Booking/Delete/5
        //public async Task<IActionResult> Delete(int? id)
        //{
        //    if (id == null)
        //    {
        //        return NotFound();
        //    }

        //    var booking = await _context.Bookings
        //        .Include(b => b.User)
        //        .FirstOrDefaultAsync(m => m.BookingId == id);

        //    if (booking == null)
        //    {
        //        return NotFound();
        //    }

        //    return View(booking);
        //}

        //// POST: Booking/Delete/5
        //[HttpPost, ActionName("Delete")]
        //[ValidateAntiForgeryToken]
        //public async Task<IActionResult> DeleteConfirmed(int id)
        //{
        //    var booking = await _context.Bookings.FindAsync(id);
        //    _context.Bookings.Remove(booking);
        //    await _context.SaveChangesAsync();
        //    return RedirectToAction(nameof(Index));
        //}

        //private bool BookingExists(int id)
        //{
        //    return _context.Bookings.Any(e => e.BookingId == id);
        //}

        //// GET: Booking/UserBookings/5
        //public async Task<IActionResult> UserBookings(int? userId)
        //{
        //    if (userId == null)
        //    {
        //        return NotFound();
        //    }

        //    var bookings = await _context.Bookings
        //    .Where(b => b.UserId == userId)
        //    .ToListAsync();

        //    ViewData["UserName"] = (await _context.Users.FindAsync(userId))?.FirstName + " " +
        //                        (await _context.Users.FindAsync(userId))?.LastName;

        //    return View(bookings);
        //}
    }
}
