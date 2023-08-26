#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i{}; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }

    int rowStart = 0, rowEnd = n - 1, columnStart = 0, columnEnd = m - 1;
    while (rowStart <= rowEnd && columnStart <= columnEnd)
    {
        for (int col = columnStart; col <= columnEnd; col++)
        {
            cout << matrix[rowStart][col] << ' ';
        }
        rowStart++;
        for (int row = rowStart; row <= rowEnd; row++)
        {
            cout << matrix[row][columnEnd] << ' ';
        }
        columnEnd--;
        for (int col = columnEnd; col >= columnStart; col--)
        {
            cout << matrix[rowEnd][col] << ' ';
        }
        rowEnd--;
        for (int row = rowEnd; row >= rowStart; row--)
        {
            cout << matrix[row][columnStart] << ' ';
        }
        columnStart++;
    }
    return 0;
}
// 5 5
// 1 8 7 6 3
// 2 4 7 1 6
// 9 2 1 8 6
// 7 4 6 3 7
// 6 6 8 4 5