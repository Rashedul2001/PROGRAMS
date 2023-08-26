#include <iostream>
#include <map>
#include <string>
#include <utility>

int main()
{
    std::map<int, std::string> Employees;
    Employees[101] = "Nikita";
    Employees[105] = "John";
    Employees[103] = "Dolly";
    Employees[104] = "Deep";
    Employees[102] = "Aman";
    std::cout << "Employees[101] "
              << " " << Employees[101] << std::endl;
    std::cout << "Map Size: " << Employees.size() << std::endl;
    // std::map<int, std::string>::iterator it = Employees.begin();
    std::cout << "Natural Order " << std::endl;
    for (std::map<int, std::string>::iterator it = Employees.begin(); it != Employees.end(); it++)
    {
        std::cout << (*it).first << ':' << (*it).second << std::endl;
    }
    std::cout << "Reverse Order: \n"
              << std::endl;
    for (std::map<int, std::string>::reverse_iterator it = Employees.rbegin(); it != Employees.rend(); it++)
        std::cout << (*it).first << ':' << (*it).second << std::endl;
    std::pair<char, int> pair1 = {'A', 5}; //
    std::pair<char, int> pair2;
    pair2 = std::make_pair('B', 3);
    pair1.swap(pair2);

    std::cout << pair1.first << " " << pair1.second << std::endl;

    return 0;
}
