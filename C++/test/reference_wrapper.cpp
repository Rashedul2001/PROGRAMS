#include <iostream>
#include <string>
#include <vector>
#include <functional>

int main()
{
    std::string tom{"Tom"}, max{"Max"}, jesy{"Jesy"};
    std::vector<std::reference_wrapper<std::string>> names{tom, max};
    names.push_back(jesy);
    // std::cout << jesy << std::endl;
    for (auto name : names)
    {
        std::cout << name.get() << std::endl;
        // does not work
        name.get() += " Blast";
    }
    std::cout << jesy << std::endl;

    return 0;
}