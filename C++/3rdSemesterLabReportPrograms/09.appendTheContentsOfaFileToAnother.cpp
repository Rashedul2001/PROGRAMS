#include <iostream>
#include <fstream>
#include <string>

int main()
{

    std::string sourceFileName = "SourceFile.txt";
    std::string destinationFileName = "Destination.txt";
    std::ifstream sourceFile{sourceFileName};
    std::ofstream destinationFile{destinationFileName,std::ios::app};

    if (!sourceFile)
    {
        std::cerr << "Error opening the Source File." << std::endl;
        return 1;
    }
    if (!destinationFile)
    {
        std::cerr << "Error opening the Destination File." << std::endl;
        return 1;
    }

    std::string line;
    while (std::getline(sourceFile, line))
    {
        destinationFile << line << std::endl;
    }

    sourceFile.close();
    destinationFile.close();

    std::cout << "File contents appended Successfully." << std::endl;

    return 0;
}
