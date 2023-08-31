#include <iostream>
int main()
{

    char buff[10];
    std::cin.get(buff, 10);
    std::cout << buff << std::endl;

    char ch;
    while (std::cin.get(ch))
    {
        std::cout << ch;
    }

    // while (std::cin >> ch)
    // {
    //     std::cout << ch;
    // }

    return 0;
}