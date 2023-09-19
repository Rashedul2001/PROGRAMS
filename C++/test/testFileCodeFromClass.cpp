#include <iostream>
#include <fstream>

int main()
{
    std::ofstream outFile("Item.txt");
    std::cout << "Enter Item Name:";
    char name[100];
    std::cin >> name;
    outFile << name << std::endl;
    std::cout << "Enter Item cost:";
    float cost;
    std::cin >> cost;
    outFile << cost << std::endl;
    outFile.close();

    std::ifstream inFile("Item.txt");

    inFile >> name;
    inFile >> cost;

    std::cout << "\n Name: " << name << " Cost: " << cost << std::endl;
    inFile.close();
}
