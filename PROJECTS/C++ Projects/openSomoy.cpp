#include <cstdlib>
#include <string>
int main()
{
    // Change the link to the one you want to open
    std::string link = "https://www.youtube.com/@somoynews360/videos";
    std::string link2 = "https://thedailycampus.com/";

    // Construct the command to open the link in the default web browser
    std::string command = "start " + link + "&& start " + link2;
    // Execute the command
    std::system(command.c_str());

    return 0;
}
