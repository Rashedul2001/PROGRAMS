#include <iostream>

int main()
{
    std::string mainStr = "This program is not Error Free";
    std::string toRem = " not";
    std::cout << "Before Deleting the substring the Text is:" << std::endl;
    std::cout << mainStr << std::endl;

    size_t pos;
    while ((pos = mainStr.find(toRem)) != std::string::npos)
    {
        mainStr.erase(pos, toRem.size());
    }
    std::cout << "After Deleting the substring the Text is:\n"
              << mainStr << std::endl;

    return 0;
}