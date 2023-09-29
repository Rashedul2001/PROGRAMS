#include <iostream>
#include <vector>


bool isSafe(std::vector<std::vector<int> > & mat,int x, int y) {
    






}

bool nQueen(std::vector<std::vector<int>> &mat, int x)
{
    if (x >= mat.size())
        return true;
    for (int col = 0; col < mat.size(); col++)
    {
        if (isSafe(mat, x, col))
        {
            mat[x][col] == 1;
            if (nQueen(mat, ++x))
            {
                return true;
            }
            mat[x][col] = 0;
        }
    }

    return false;
}

int main()
{
    std::cout << "Enter the size of the matrix: ";
    int n;
    std::cin >> n;
    std::vector<std::vector<int>> matrix(n, std::vector<int>(n, 0));
    // for (auto row : matrix)
    // {
    //     for (auto col : row)
    //     {
    //         std::cout << col << ' ';
    //     }
    //     std::cout << std::endl;
    // }
    std::cout << matrix.size() << std::endl;
    // every row have to have a queen
    if (nQueen(matrix, 0)) // here 0 is the number of Queen has already been placed in the matrix
    {

        for (auto row : matrix)
        {
            for (auto col : row)
            {
                std::cout << col << ' ';
            }
            std::cout << std::endl;
        }
    }

    return 0;
}