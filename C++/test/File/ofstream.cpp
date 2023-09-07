#include <iostream>
#include <fstream>

int main()
{

    std::ofstream outFile("output.txt");

    if (!outFile)
    {
        std::cerr << "Oh no! ouput.txt could not be opened for writing." << std::endl;
        return 1;
    }
    outFile << "Writing output File... " << std::endl;
    outFile << "another Line" << std::endl;

    outFile.close();
    

    return 0;
}