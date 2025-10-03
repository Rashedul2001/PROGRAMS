
using HotelBookingSystem.Models.Domain;
using Microsoft.EntityFrameworkCore;

namespace HotelBookingSystem.DataBase
{
    public class HotelBookingContext(DbContextOptions<HotelBookingContext> options) : DbContext(options)
    {
        public DbSet<BookingModel> Bookings { get; set; }
        public DbSet<HotelModel> Hotels { get; set; }
        public DbSet<PaymentModel> Payments { get; set; }
        public DbSet<ReviewModel> Reviews { get; set; }
        public DbSet<RoomModel> Rooms { get; set; }
        public DbSet<UserModel> Users { get; set; }

        protected override void OnModelCreating(ModelBuilder modelBuilder)
        {
            // don't need to reference other way around like UserModel -> BookingModel as well as BookingModel -> UserModel
            // only need to reference one time and both will be related to each other
            modelBuilder.Entity<UserModel>().HasMany(u => u.Bookings).WithOne(b => b.User).HasForeignKey(b => b.UserId).OnDelete(DeleteBehavior.Cascade);
            modelBuilder.Entity<UserModel>().HasMany(u => u.Payments).WithOne(p => p.User).HasForeignKey(p => p.UserId).OnDelete(DeleteBehavior.NoAction);
            modelBuilder.Entity<UserModel>().HasMany(u => u.Reviews).WithOne(r => r.User).HasForeignKey(r => r.UserId).OnDelete(DeleteBehavior.Cascade);
            modelBuilder.Entity<BookingModel>().HasMany(b => b.Payments).WithOne(p => p.Booking).HasForeignKey(p => p.BookingId).OnDelete(DeleteBehavior.Cascade);
            modelBuilder.Entity<RoomModel>().HasMany(r => r.Bookings).WithOne(b => b.Room).HasForeignKey(b => b.RoomId).OnDelete(DeleteBehavior.Cascade);
            modelBuilder.Entity<HotelModel>().HasMany(h => h.Rooms).WithOne(r => r.Hotel).HasForeignKey(r => r.HotelId).OnDelete(DeleteBehavior.Cascade);
            modelBuilder.Entity<HotelModel>().HasMany(h => h.Reviews).WithOne(r => r.Hotel).HasForeignKey(r => r.HotelId).OnDelete(DeleteBehavior.Cascade);

            base.OnModelCreating(modelBuilder);
        }
    }
}
