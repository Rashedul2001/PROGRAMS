using System.Reflection.Metadata.Ecma335;
using HotelBookingSystem.DataBase;
using HotelBookingSystem.Models.SubmissionModel;
using HotelBookingSystem.Models.ViewModel;
using Microsoft.EntityFrameworkCore;

namespace HotelBookingSystem.Repository
{

    public class AdminRepo(HotelBookingContext context) : IAdminRepo
    {
        private readonly HotelBookingContext hotelDb = context;

        public async Task DeleteUser(int id)
        {
            var user = await hotelDb.Users.FindAsync(id);
            if (user != null)
            {

                hotelDb.Users.Remove(user);
                await hotelDb.SaveChangesAsync();
            }
        }

        public async Task<IEnumerable<UserListViewModel>> GetAllUsersAsync()
        {
            var allUsers = await hotelDb.Users.ToListAsync();
            var allUserList = new List<UserListViewModel>();
            foreach (var user in allUsers)
            {
                allUserList.Add(new UserListViewModel
                {
                    UserId = user.UserId,
                    UserName = user.UserName,
                    UserPhone = user.UserPhone,
                    UserEmail = user.UserEmail,
                    UserPassword = user.UserPassword,
                    UserAddress = user.UserAddress,
                    UserDOB = user.UserDOB,
                    UserNID = user.UserNID,
                    UserGender = user.UserGender,
                    UserRole = user.UserRole

                });
            }
            return allUserList;
        }

        public async Task<AdminEditRequestModel?> GetUserByIdAsync(int id)
        {
            var user = await hotelDb.Users.FirstOrDefaultAsync(x => x.UserId == id);
            if (user == null) return null;
            var editUser = new AdminEditRequestModel
            {
                UserId = user.UserId,
                UserName = user.UserName,
                UserPhone = user.UserPhone,
                UserEmail = user.UserEmail,
                UserPassword = user.UserPassword,
                UserAddress = user.UserAddress,
                UserDOB = user.UserDOB,
                UserNID = user.UserNID,
                UserGender = user.UserGender,
                UserRole = user.UserRole,
                UserImage = user.UserImage,

            };
            return editUser;
        }

        public async Task UpdateUserAsync(AdminEditRequestModel editUser)
        {
            var user = await hotelDb.Users.FindAsync(editUser.UserId);
            if (user == null) return;
            user.UserId = editUser.UserId;
            user.UserName = editUser.UserName;
            user.UserPhone = editUser.UserPhone;
            user.UserEmail = editUser.UserEmail;
            user.UserPassword = editUser.UserPassword;
            user.UserAddress = editUser.UserAddress;
            user.UserDOB = editUser.UserDOB;
            user.UserNID = editUser.UserNID;
            user.UserGender = editUser.UserGender;
            user.UserRole = editUser.UserRole;
            user.UserImage = editUser.UserImage;
            hotelDb.Entry(user).State = EntityState.Modified;
            await hotelDb.SaveChangesAsync();
        }
    }
}
