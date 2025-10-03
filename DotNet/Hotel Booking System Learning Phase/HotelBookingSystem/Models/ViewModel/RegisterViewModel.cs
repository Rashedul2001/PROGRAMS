
using System.ComponentModel.DataAnnotations;

namespace HotelBookingSystem.Models.ViewModel
{
	public class RegisterViewModel
	{
		public required string UserName { get; set; }
		public required string Email { get; set; }
		public required string Password { get; set; }
		[Compare("Password", ErrorMessage = "Passwords do not match.")]
		public required string ConfirmPassword { get; set; }
		public required string Role { get; set; }


	}
}