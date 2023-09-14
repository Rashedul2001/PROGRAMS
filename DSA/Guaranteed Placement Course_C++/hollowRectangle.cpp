#include <iostream>

int main()
{
    std::cout << "Please Enter Row and Column Number:";
    int row, column;
    std::cin >> row >> column;
    for (int i{}; i < row; i++)
    {
        for (int j{}; j < column; j++)
        {
            if (i == 0 || i == row - 1 || j == 0 || j == column - 1)
            {
                std::cout << "*";
            }
            else
                std::cout << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
