using HotelBookingSystem.DataBase;
using HotelBookingSystem.Models.Domain;
using HotelBookingSystem.Models.SubmissionModel;
using HotelBookingSystem.Models.ViewModel;
using Microsoft.EntityFrameworkCore;

namespace HotelBookingSystem.Repository
{
    public class UserRepo(HotelBookingContext context) : IUserRepo
    {
        private readonly HotelBookingContext hotelDbContext = context;

        public async Task<UserModel> SaveUser(SaveUserRequestModel newUser)
        {
            var user = new UserModel
            {
                UserName = newUser.UserName,
                UserPhone = newUser.UserPhone,
                UserEmail = newUser.UserEmail,
                UserPassword = newUser.UserPassword,
                UserAddress = newUser.UserAddress,
                UserDOB = newUser.UserDOB,
                UserNID = newUser.UserNID,
                UserGender = newUser.UserGender,
                UserRole = "user",
                UserImage = "currently no image"
            };
            await hotelDbContext.AddAsync(user);
            await hotelDbContext.SaveChangesAsync();
            return user;
        }

        public async Task<UserViewModel?> Profile(int id)
        {
            var user = await hotelDbContext.Users.FindAsync(id);
            if (user != null)
            {
                var viewUser = new UserViewModel
                {
                    UserId = user.UserId,
                    UserName = user.UserName,
                    UserPhone = user.UserPhone,
                    UserEmail = user.UserEmail,
                    UserAddress = user.UserAddress,
                    UserDOB = user.UserDOB,
                    UserNID = user.UserNID,
                    UserRole = user.UserRole,
                    UserGender = user.UserGender

                };
                return viewUser;
            }
            return null;
        }

        public async Task DeleteProfile(int id)
        {
            var user = await hotelDbContext.Users.FindAsync(id);
            if (user != null)
            {
                hotelDbContext.Users.Remove(user);
                await hotelDbContext.SaveChangesAsync();
            }
        }

        //public async Task<UserModel?> Login(LoginRequestModel login)
        //{
        //    return await hotelDbContext.Users.FirstOrDefaultAsync(u => u.UserId == login.UserId && u.UserPassword == login.UserPassword);
        //}

        public async Task EditProfile(EditProfileRequestModel editUser)
        {
            var user = await hotelDbContext.Users.FindAsync(editUser.UserId);
            if (user != null)
            {
                user.UserName = editUser.UserName;
                user.UserPhone = editUser.UserPhone;
                user.UserEmail = editUser.UserEmail;
                user.UserAddress = editUser.UserAddress;
                user.UserDOB = editUser.UserDOB;
                user.UserNID = editUser.UserNID;
                user.UserGender = editUser.UserGender;
                if (!string.IsNullOrWhiteSpace(editUser.UserPassword))
                {
                    user.UserPassword = editUser.UserPassword;
                }
                hotelDbContext.Entry(user).State = EntityState.Modified;
                await hotelDbContext.SaveChangesAsync();
            }
        }
        public async Task<UserModel?> GetUserDetailsById(int id)
        {
            return await hotelDbContext.Users.Include(u => u.Bookings).FirstOrDefaultAsync(a => a.UserId == id);
        }

        public async Task<IEnumerable<UserModel>> GetAllUsersAsync()
        {
           return await hotelDbContext.Users.ToListAsync();
        }
    }
}
