using Microsoft.AspNetCore.Mvc;

namespace HotelBookingSystem.Repository
{
    public interface ICloudinaryImageRepo
    {
        Task<string?> UploadImageAsync(IFormFile file);

    }
}
