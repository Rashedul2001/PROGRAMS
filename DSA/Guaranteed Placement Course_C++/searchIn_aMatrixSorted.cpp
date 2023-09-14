#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int n, m, element;
    cin >> n >> m >> element;
    vector<vector<int>> matrix(n, vector<int>(m));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> matrix[i][j];
        }
    }
    bool found = false;
    int row = 0, column = m - 1;
    while (row < n && column >= 0)
    {
        if (matrix[row][column] == element)
        {
            found = true;
            break;
        }
        else if (matrix[row][column] > element)
        {
            column--;
        }
        else
            row++;
    }
    if (found)
    {
        cout << "The Element was found" << endl;
    }
    else
        cout << "The Element does not exist" << endl;

    return 0;
}