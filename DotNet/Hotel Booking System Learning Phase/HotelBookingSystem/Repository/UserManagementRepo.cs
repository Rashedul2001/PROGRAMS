using HotelBookingSystem.DataBase;
using HotelBookingSystem.Models.ViewModel;
using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Metadata.Internal;

namespace HotelBookingSystem.Repository
{
	public class UserManagementRepo(AuthDbContext context, UserManager<IdentityUser> userManager, RoleManager<IdentityRole> roleManager) : IUserManagementRepo
	{
		private readonly AuthDbContext context = context;
		private readonly UserManager<IdentityUser> userManager = userManager;
		private readonly RoleManager<IdentityRole> roleManager = roleManager;
		public async Task<IEnumerable<IdentityUserListView>> GetAllUsersAsync()
		{
			var users = await context.Users.ToListAsync();
			var superAdmin = await context.Users.FirstOrDefaultAsync(x => x.Email == "rashedulprogrammer@gmail.com");
			users.Remove(superAdmin);
			var userViewList = new List<IdentityUserListView>();
			foreach (var user in users)
			{
				var userView = new IdentityUserListView
				{
					UserId = user.Id,
					UserName = user.UserName,
					Email = user.Email,
				};
				userViewList.Add(userView);
			}
			return userViewList;
		}
		public async Task<IEnumerable<IdentityUserListView>> GetUsersBySearchTerm(string? searchTerm)
		{
		
			var users = await context.Users.AsQueryable()
				.Where(x => x.UserName.Contains(searchTerm) || x.Email.Contains(searchTerm))
				.ToListAsync();
			var superAdmin = await context.Users.FirstOrDefaultAsync(x => x.UserName == "RashedulSuperAdmin");
			users.Remove(superAdmin);
			return users.Select(user => new IdentityUserListView
			{
				UserId = user.Id,
				UserName = user.UserName,
				Email = user.Email,
			}).ToList();
		}


		public async Task<IdentityResult> RegisterAdmin(RegisterViewModel model)
		{
			var user = new IdentityUser
			{
				UserName = model.UserName,
				Email = model.Email,
				EmailConfirmed = true,
			};
			var result = await userManager.CreateAsync(user, model.Password);
			if (result.Succeeded)
			{
				await userManager.AddToRoleAsync(user, model.Role);
			}
			return result;

		}
	}
}
