using HotelBookingSystem.DataBase;
using HotelBookingSystem.Models.SubmissionModel;
using HotelBookingSystem.Models.ViewModel;
using HotelBookingSystem.Repository;
using Microsoft.AspNetCore.Authorization;
using Microsoft.AspNetCore.Mvc;
using Microsoft.EntityFrameworkCore;

namespace HotelBookingSystem.Controllers
{
	[Authorize(Roles = "Admin,SuperAdmin")]
	public class AdminController(IAdminRepo adminRepo) : Controller
	{
		private readonly IAdminRepo adminRepo = adminRepo;

		public IActionResult Rashedul()
		{
			return View();
		}

		[HttpGet]
		public async Task<IActionResult> UserList()
		{
			var userList = await adminRepo.GetAllUsersAsync();
			return View(userList);
		}

		[HttpGet]
		public async Task<IActionResult> Edit(int id)
		{
			var user = await adminRepo.GetUserByIdAsync(id);
			if (user == null) return NotFound();
			return View(user);
		}

		[HttpPost]
		public async Task<IActionResult> Edit(AdminEditRequestModel editUser)
		{
			if (ModelState.IsValid)
			{
				await adminRepo.UpdateUserAsync(editUser);
				return RedirectToAction("UserList");
			}
			return View(editUser);
		}

		[HttpGet]
		public async Task<IActionResult> DeleteProfile(int id)
		{
			await adminRepo.DeleteUser(id);
			return RedirectToAction("UserList");
		}
	}
}
