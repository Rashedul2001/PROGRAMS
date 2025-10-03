using HotelBookingSystem.Repository;
using Microsoft.AspNetCore.Mvc;

namespace HotelBookingSystem.Controllers
{
    [Route("api/[controller]")]
    [ApiController]
    public class UsersImageController(ICloudinaryImageRepo cloudinaryImageRepo) : ControllerBase
    {
        private readonly ICloudinaryImageRepo cloudinaryImageRepo = cloudinaryImageRepo;

        [HttpGet]
        public IActionResult Test()
        {
            return Ok("Get all images");
        }
        [HttpPost]
        public async Task<IActionResult> UploadImageAync(IFormFile file)
        {
            var imageUrl = await cloudinaryImageRepo.UploadImageAsync(file);
            if (imageUrl == null)
            {
                return BadRequest("Image upload failed");
            }
            return new JsonResult(new { link =imageUrl });

        }

    }
}
