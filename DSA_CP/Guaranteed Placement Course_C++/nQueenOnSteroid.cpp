#include <iostream>
#include <vector>
#include <string>

void placeQueens(int n, std::vector<std::vector<std::string>> &allPossibleResultBoard)
{
    std::vector<std::string> board(n,std::string(n, '0'));
    

}

int main()
{

    std::cout << "Enter The number of Queens: ";
    int n;
    std::cin >> n;
    std::vector<std::vector<std::string>> solutions;
    placeQueens(n, solutions);
    for (auto solution : solutions)
    {

        for (auto row : solution)
        {
            for (auto character : row)
            {
                std::cout << character << " ";
            }
            std::cout << std::endl;
        }
        std::cout << std::endl;
    }

    return 0;
}