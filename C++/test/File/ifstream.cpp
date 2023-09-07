#include <iostream>
#include <fstream>

int main()
{

    std::ifstream inputFile("inputFile.txt");
    if (!inputFile)
    {
        std::cerr << "Error opening inputFile.txt for reading." << std::endl;
        return 1;
    }

    while (inputFile)
    {
        std::string inputStreamString;
        inputFile >> inputStreamString;
        std::cout << inputStreamString;
    }
    std::cout << std::endl;
    inputFile.close();
    inputFile.open("inputFile.txt");

    while (inputFile)
    {
        std::string inputStreamString;
        std::getline(inputFile, inputStreamString);
        std::cout << inputStreamString << std::endl;
    }

    return 0;
}