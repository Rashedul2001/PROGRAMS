#include <iostream>

int main()
{
    std::string mainStr = "This is the main text";
    std::string replacer{"output"}, rep{"main"};
    std::cout << "Before Replacing: " << mainStr << std::endl;
    size_t pos;
    while ((pos = mainStr.find(rep)) != std::string::npos)
    {
        mainStr.replace(pos, rep.length(), replacer);
    }
    std::cout << "After Replacing: " << mainStr << std::endl;

    return 0;
}