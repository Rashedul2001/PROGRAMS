using HotelBookingSystem.Models.Domain;
using HotelBookingSystem.Models.SubmissionModel;
using HotelBookingSystem.Models.ViewModel;

namespace HotelBookingSystem.Repository
{
    public interface IUserRepo
    {
        Task<UserModel> SaveUser(SaveUserRequestModel newUser);
        Task<UserViewModel?> Profile(int id);
        Task DeleteProfile(int id);
        //Task<UserModel?> Login(LoginRequestModel login);
        Task EditProfile(EditProfileRequestModel editUser);
        Task<UserModel?> GetUserDetailsById(int id);
        Task<IEnumerable<UserModel>> GetAllUsersAsync();
    }
}
