namespace Student_Info.ImageRepository
{
    public interface IImageRepo
    {
        public  Task<string?> UploadAsync(IFormFile file);
    }
}
