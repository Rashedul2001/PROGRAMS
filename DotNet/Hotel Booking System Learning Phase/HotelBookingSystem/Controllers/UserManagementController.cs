using HotelBookingSystem.Models.ViewModel;
using HotelBookingSystem.Repository;
using Microsoft.AspNetCore.Mvc;
using Microsoft.AspNetCore.Mvc.Infrastructure;

namespace HotelBookingSystem.Controllers
{
	public class UserManagementController(IUserManagementRepo userManagementRepo) : Controller
	{
		private readonly IUserManagementRepo userManagementRepo = userManagementRepo;
		[HttpGet]
		public async Task<IActionResult> List(string? search, string? sort, int currentPage = 1, string? pageSize = "10")
		{

			ViewBag.search = search;
			ViewBag.sort = sort;
			ViewBag.currentPage = currentPage;
			ViewBag.pageSize = pageSize;
			ViewBag.totalpages = 1;

			var users = string.IsNullOrWhiteSpace(search) ? await userManagementRepo.GetAllUsersAsync() : await userManagementRepo.GetUsersBySearchTerm(search);
			var totalUsers = users.Count();
			if (!string.Equals(pageSize,"All",StringComparison.OrdinalIgnoreCase))
			{

				int size = int.Parse(pageSize);
				users = users.Skip((currentPage - 1) * size).Take(size).ToList();
				ViewBag.Totalpages = (int)Math.Ceiling((double)totalUsers / size);
			}
			users = sort switch
			{
				"ID Desc" => users.OrderByDescending(x => x.UserId),
				"User Name Desc" => users.OrderByDescending(x => x.UserName),
				"User Name" => users.OrderBy(x => x.UserName),
				"Email Desc" => users.OrderByDescending(x => x.Email),
				"Email" => users.OrderBy(x => x.Email),
				_ => users.OrderBy(x => x.UserId),
			};
			return View(users);

		}

		public async Task<IActionResult> Register(RegisterViewModel model)
		{
			if (ModelState.IsValid)
			{
				var result = await userManagementRepo.RegisterAdmin(model);
				if (!result.Succeeded)
				{
					ViewBag.ShowModal = true;
				}
			}
			return RedirectToAction("List");

		}
		[HttpGet]
		public IActionResult AjaxList(){
			
			return View();

		}


	}
}
