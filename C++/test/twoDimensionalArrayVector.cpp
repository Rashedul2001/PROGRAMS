#include <iostream>
#include <vector>

int main()
{
    std::vector<std::vector<int>> matrix(3, std::vector<int>(3, 0));
    /** we are declaring two dimensional array using vector. Here we are creating a vector of type vector
     *  and the inner vector type is int. now int he () parenthesis 3 is for declaring that the length of the
     * first or outer vector is 3 or can say that it will have 3 elements of type vector<int>
     * now the other parameter is std::vector<int>(3,0) right?, it's for declaring the column of the array
     * the column AKA outer vector element are also a vector , then we should set them as a vector
     * here we set 3 of the element for inner vector and set all the element as 0
     */

    matrix[0][0] = 0;
    matrix[0][1] = 1;
    matrix[0][2] = 2;
    matrix[1][0] = 3;
    matrix[1][1] = 4;
    matrix[1][2] = 5;
    matrix[2][0] = 6;
    matrix[2][1] = 7;
    matrix[2][2] = 8;

    for (const auto &row : matrix)
    {
        for (const auto &element : row)
        {
            std::cout << element << " ";
        }
        std::cout << '\n';
    }

    return 0;
}