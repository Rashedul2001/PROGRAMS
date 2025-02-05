namespace Student_Info.ImageRepository
{
    public class ImageRepo : IImageRepo
    {
        public async Task<string?> UploadAsync(IFormFile file)
        {
            if (file == null) return null;
            var path = Path.Combine(Directory.GetCurrentDirectory(), "wwwroot", file.FileName);
            using (var stream = new FileStream(path, FileMode.Create))
            {
                await file.CopyToAsync(stream);
            }
            return file.FileName;
        }
    }
}
