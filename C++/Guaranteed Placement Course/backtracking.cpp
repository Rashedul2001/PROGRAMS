#include <iostream>
using namespace std;
bool isSafe(int **arr, int x, int y, int n)
{
    if (x < n && y < n && arr[x][y] == 1)
    {
        return true;
    }
    return false;
}

bool ratMaze(int **arr, int x, int y, int n, int **solArr)
{
    if (x == n - 1 && y == n - 1 && arr[x][y] == 1)
    {
        solArr[x][y] = 1;

        return true;
    }

    if (isSafe(arr, x, y, n))
    {
        solArr[x][y] = 1;
        if (ratMaze(arr, x + 1, y, n, solArr))
        {
            return true;
        }
        if (ratMaze(arr, x, y + 1, n, solArr))
        {
            return true;
        }
        solArr[x][y] = 0; // backtracking
        return false;
    }
    return false;
}

int main()
{
    cout << "Enter the Size of Matrix: ";

    int n;
    cin >> n;
    int **arr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        arr[i] = new int[n];
    }
    cout << "Enter the Matrix: ";

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> arr[i][j];
        }
    }

    int **solArr = new int *[n];
    for (int i = 0; i < n; i++)
    {
        solArr[i] = new int[n];
        for (int j = 0; j < n; j++)
        {
            solArr[i][j] = 0;
        }
    }
    cout << "\n\n";
    int x, y;
    cout << "Enter Rat position: ";

    cin >> x >> y;

    if (ratMaze(arr, x, y, n, solArr))
    {
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cout << solArr[i][j] << ' ';
            }
            cout << endl;
        }
    }
    else
        cout << "can't go" << endl;

    return 0;
}

// 1 0 1 0 1
// 1 1 1 1 1
// 0 1 0 1 0
// 1 0 0 1 1
// 1 1 1 0 1
