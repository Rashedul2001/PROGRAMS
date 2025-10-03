using HotelBookingSystem.Repository;
using Microsoft.AspNetCore.Mvc;
using HotelBookingSystem.Models.SubmissionModel;
using Microsoft.AspNetCore.Authorization;

namespace HotelBookingSystem.Controllers
{
    [Authorize]
    public class UserController(IUserRepo userRepo) : Controller
    {
        private readonly IUserRepo userRepo = userRepo;

        [HttpGet]
        public IActionResult UserCreation()
        {
            return View();
        }

        [HttpPost]
        public async Task<IActionResult> SaveUser(SaveUserRequestModel newUser)
        {
            if (newUser != null)
            {
                var user = await userRepo.SaveUser(newUser);
                return RedirectToAction("Profile", new { id = user.UserId });
            }
            return View(newUser);
        }

        [HttpGet]
        public async Task<IActionResult> Profile(int id)
        {
            var user = await userRepo.Profile(id);
            
            if (user == null)
            {
                return NotFound();
            }
            return View(user);
        }

        [HttpGet]
        public async Task<IActionResult> EditProfile(int id)
        {
            var user = await userRepo.Profile(id);
            if (user == null)
            {
                return NotFound();
            }

            var editUser = new EditProfileRequestModel
            {
                UserId = user.UserId,
                UserName = user.UserName,
                UserPhone = user.UserPhone,
                UserEmail = user.UserEmail,
                UserAddress = user.UserAddress,
                UserDOB = user.UserDOB,
                UserNID = user.UserNID,
                UserGender = user.UserGender,
            };

            return View(editUser);
        }

        [HttpPost]
        public async Task<IActionResult> EditProfile(EditProfileRequestModel editUser)
        {
            if (ModelState.IsValid)
            {
                await userRepo.EditProfile(editUser);
                return RedirectToAction("Profile", new { id = editUser.UserId });
            }
            return View(editUser);
        }

        [HttpPost]
        public async Task<IActionResult> DeleteProfile(int id)
        {
            await userRepo.DeleteProfile(id);
            return RedirectToAction("Index", "Home");
        }
        public async Task<IActionResult> Details(int id)
        {
             var user = await userRepo.GetUserDetailsById(id);

            if (user == null)
            {
                return NotFound();
            }

            return View(user);
        }

    }
}
