using Microsoft.AspNetCore.Identity;
using Microsoft.AspNetCore.Identity.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore;
using Microsoft.EntityFrameworkCore.Diagnostics;

namespace HotelBookingSystem.DataBase
{
    public class AuthDbContext(DbContextOptions<AuthDbContext> options, IConfiguration config) : IdentityDbContext(options)
    {
        private readonly IConfiguration _config = config ?? throw new ArgumentNullException(nameof(config));

		protected override void OnModelCreating(ModelBuilder builder)
        {
            base.OnModelCreating(builder);
            SeedRolesAndAdminUser(builder);
        }
        private void SeedRolesAndAdminUser(ModelBuilder builder)
        {
            var roles = new[]
            {
                      new { Id = "ead0babe-a366-486e-9916-4081e9350caa", Name = "SuperAdmin", NormalizedName = "SUPERADMIN" },
                      new { Id = "2879e517-e39e-491d-b41c-7517eb1d5f5b", Name = "Admin", NormalizedName = "ADMIN" },
                      new { Id = "489c8ae2-e82b-4518-a7e2-04b4342a57e5", Name = "User", NormalizedName = "USER" }
                  };
            builder.Entity<IdentityRole>().HasData(roles);

            var superAdminUserId = "3065e868-fa89-4ca5-88f0-29586e9eea61";
            var superAdminEmail = _config["SuperAdmin:Email"] ?? throw new ArgumentNullException("SuperAdmin:Email");
            var superAdminUserName = _config["SuperAdmin:UserName"] ?? throw new ArgumentNullException("SuperAdmin:UserName");
            var initialPassword = _config["SuperAdmin:Password"] ?? throw new ArgumentNullException("SuperAdmin:InitialPassword");

            var hasher = new PasswordHasher<IdentityUser>();

            var superAdminUser = new IdentityUser
            {
                Id = superAdminUserId,
                UserName = superAdminUserName,
                NormalizedUserName = superAdminUserName.ToUpper(),
                Email = superAdminEmail,
                NormalizedEmail = superAdminEmail.ToUpper(),
                EmailConfirmed = true,
                SecurityStamp = "3333658e-3169-497a-8b97-934395abcc85"
            };
            superAdminUser.PasswordHash = hasher.HashPassword(superAdminUser, initialPassword);
            builder.Entity<IdentityUser>().HasData(superAdminUser);

            var superAdminRole = new[]
            {
                      new { RoleId = roles[0].Id, UserId = superAdminUserId },
                      new { RoleId = roles[1].Id, UserId = superAdminUserId },
                      new { RoleId = roles[2].Id, UserId = superAdminUserId }
                  };
            builder.Entity<IdentityUserRole<string>>().HasData(superAdminRole);
        }

        protected override void OnConfiguring(DbContextOptionsBuilder optionsBuilder)
        {
            optionsBuilder.ConfigureWarnings(warnings => warnings.Ignore(RelationalEventId.PendingModelChangesWarning));
        }
    }
}
