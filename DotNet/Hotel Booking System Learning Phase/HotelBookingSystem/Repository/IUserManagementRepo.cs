using HotelBookingSystem.Models.ViewModel;
using Microsoft.AspNetCore.Identity;
namespace HotelBookingSystem.Repository
{
	public interface IUserManagementRepo
	{
		public Task<IEnumerable<IdentityUserListView>> GetAllUsersAsync();
		public Task<IdentityResult> RegisterAdmin(RegisterViewModel model);
		public Task<IEnumerable<IdentityUserListView>> GetUsersBySearchTerm(string? searchTerm);


	}
}
