using HotelBookingSystem.Models.SubmissionModel;
using HotelBookingSystem.Models.ViewModel;
using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Mvc;

namespace HotelBookingSystem.Controllers
{
	public class AccountController(UserManager<IdentityUser> userManager, SignInManager<IdentityUser> signInManager) : Controller
	{
		private readonly UserManager<IdentityUser> _userManager = userManager;
		private readonly SignInManager<IdentityUser> _signInManager = signInManager;

		[HttpGet]
		public IActionResult Register()
		{
			return View();
		}
		[HttpPost]
		public async Task<IActionResult> Register(RegisterViewModel model)
		{
			if (model.Password == model.ConfirmPassword)
			{
				var identityUser = new IdentityUser
				{
					UserName = model.UserName,
					Email = model.Email,
					EmailConfirmed = true,
				};
				var result = await _userManager.CreateAsync(identityUser, model.Password);
				if (result.Succeeded)
				{
					var regResult = await _userManager.AddToRoleAsync(identityUser, model.Role);
					if (regResult.Succeeded)
						return RedirectToAction("Index", "Home");
				}
			}
			return View();
		}
		[HttpGet]
		public IActionResult LogIn()
		{
			return View();
		}
		[HttpPost]
		public async Task<IActionResult> LogIn(LogInRequestModel model)
		{
			if (ModelState.IsValid)
			{
				var result = await _signInManager.PasswordSignInAsync(model.UserName, model.UserPassword, isPersistent: false, lockoutOnFailure: false);
				if (result.Succeeded)
				{
					return RedirectToAction("Rashedul", "Admin");
				}
			}
			return View();
		}
		public async Task<IActionResult> LogOut()
		{
			await _signInManager.SignOutAsync();
			return RedirectToAction("Index", "Home");
		}
		public IActionResult AccessDenied()
		{
			return RedirectToAction("Index","Home");
		}

	}
}
