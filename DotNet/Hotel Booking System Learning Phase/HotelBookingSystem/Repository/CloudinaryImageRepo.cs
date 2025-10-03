using System.Net;
using CloudinaryDotNet;
using CloudinaryDotNet.Actions;
using Microsoft.AspNetCore.Mvc;

namespace HotelBookingSystem.Repository
{
    public class CloudinaryImageRepo : ICloudinaryImageRepo
    {
        private readonly IConfiguration config;
        private readonly Account cloudinaryAccount;
        public CloudinaryImageRepo(IConfiguration config)
        {
            this.config = config;
            cloudinaryAccount = new Account(
                config["Cloudinary:CloudName"],
                config["Cloudinary:ApiKey"],
                config["Cloudinary:ApiSecret"]
            );
        }

        public async Task<string?> UploadImageAsync(IFormFile file)
        {
            var cloud = new Cloudinary(cloudinaryAccount);
            var uploadParams = new ImageUploadParams()
            {
                File = new FileDescription(file.FileName, file.OpenReadStream()),
                DisplayName = file.FileName
            };
            var uploadResult = await cloud.UploadAsync(uploadParams);
            if (uploadResult !=null &&  uploadResult.StatusCode == HttpStatusCode.OK)
            {
                return uploadResult.SecureUrl.ToString();
            }
            return null;


        }
    }
}


