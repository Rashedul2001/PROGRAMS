using HotelBookingSystem.DataBase;
using HotelBookingSystem.Repository;
using Microsoft.AspNetCore.Identity;
using Microsoft.EntityFrameworkCore;

var builder = WebApplication.CreateBuilder(args);

// Add services to the container.
builder.Services.AddControllersWithViews();


builder.Services.AddDbContext<HotelBookingContext>(options => options.UseSqlServer(builder.Configuration.GetConnectionString("DefaultConnection")));
builder.Services.AddDbContext<AuthDbContext>(options => options.UseSqlServer(builder.Configuration.GetConnectionString("IdentityConnection")));


builder.Services.AddIdentity<IdentityUser, IdentityRole>(options => options.SignIn.RequireConfirmedAccount = true)
    .AddEntityFrameworkStores<AuthDbContext>()
    .AddDefaultTokenProviders();


builder.Services.AddScoped<IUserRepo, UserRepo>();
builder.Services.AddScoped<IAdminRepo, AdminRepo>();
builder.Services.AddScoped<ICloudinaryImageRepo, CloudinaryImageRepo>();
builder.Services.AddScoped<IBookingRepository, BookingRepository>();
builder.Services.AddScoped<IUserManagementRepo, UserManagementRepo>();


var app = builder.Build();

// Configure the HTTP request pipeline.
if (!app.Environment.IsDevelopment())
{
    app.UseExceptionHandler("/Home/Error");
    // The default HSTS value is 30 days. You may want to change this for production scenarios, see https://aka.ms/aspnetcore-hsts.
    app.UseHsts();
}

app.UseHttpsRedirection();
app.UseStaticFiles();

app.UseRouting();

app.UseAuthorization();

app.MapControllerRoute(
    name: "default",
    pattern: "{controller=Home}/{action=Index}/{id?}");

app.Run();
