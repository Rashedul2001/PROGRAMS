using HotelBookingSystem.Models.SubmissionModel;
using HotelBookingSystem.Models.ViewModel;

namespace HotelBookingSystem.Repository
{
    public interface IAdminRepo
    {
        Task<IEnumerable<UserListViewModel>> GetAllUsersAsync();
        Task<AdminEditRequestModel?> GetUserByIdAsync(int id);
        Task UpdateUserAsync(AdminEditRequestModel editUser);
        Task DeleteUser(int id);
    }
}
