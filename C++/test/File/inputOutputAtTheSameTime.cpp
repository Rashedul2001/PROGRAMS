#include <iostream>
#include <fstream>
#include <string>

int main()
{
    std::fstream inputOutputFile{"inputOutputFile.txt", std::ios::in | std::ios::out};
    if (!inputOutputFile)
    {
        std::cerr << "Error Opening File" << std::endl;
        return 1;
    }
    char ch{};
    while (inputOutputFile.get(ch))
    {
        switch (ch)
        {
        case 'a':
        case 'e':
        case 'i':
        case 'o':
        case 'u':
        case 'A':
        case 'E':
        case 'I':
        case 'O':
        case 'U':
            inputOutputFile.seekg(-1, std::ios::cur); // move backwards
            // this is needed because for writing after reading or
            // reading after writing we must seek
            inputOutputFile << '#';

            // again seek to make it readable
            inputOutputFile.seekg(inputOutputFile.tellg(), std::ios::beg); // go the same place where we were
            // tellg() returns the postion to seek
            break;
        }
    }
    // I don't know why this code is not working  it's answer is not correct

    return 0;
}