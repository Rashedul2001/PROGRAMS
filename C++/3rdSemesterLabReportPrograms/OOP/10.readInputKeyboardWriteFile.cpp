#include <iostream>
#include <fstream>
#include <string>

int main()
{

    std::string fileName;
    std::string inputLine;
    std::cout << "Enter the name of the file to write: ";
    std::cin >> fileName;
    std::ofstream outputFile{fileName};
    std::cin.ignore();


    if (!outputFile)
    {
        std::cerr << "Error Opening the output File." << std::endl;
        return 1;
    }
    std::cout << "Enter text the write to the file (type \"exit\" to Finish):"<<std::endl;
    while (true)
    {
        std::getline(std::cin, inputLine);
        if (inputLine == "exit")
        {
            break;
        }
        outputFile << inputLine << std::endl;
    }
    outputFile.close();
    std::cout << "Data has been written to the File." << std::endl;

    return 0;
}