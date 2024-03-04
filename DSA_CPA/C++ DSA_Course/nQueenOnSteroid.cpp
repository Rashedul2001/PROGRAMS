#include <iostream>
#include <vector>

using namespace std;

// Function to check if a queen can be placed at a given position
bool isSafe(vector<string> &board, int row, int col, int N)
{
    // Check the row on the left side
    for (int i = 0; i < col; i++)
    {
        if (board[row][i] == 'Q')
        {
            return false;
        }
    }

    // Check the upper diagonal on the left side
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    // Check the lower diagonal on the left side
    for (int i = row, j = col; i < N && j >= 0; i++, j--)
    {
        if (board[i][j] == 'Q')
        {
            return false;
        }
    }

    return true;
}

// Function to solve N-Queens problem using backtracking
void solveNQueens(vector<vector<string>> &result, vector<string> &board, int col, int N)
{
    if (col == N)
    {
        // All queens are successfully placed, add the current board configuration to the result
        result.push_back(board);
        return;
    }

    for (int row = 0; row < N; row++)
    {
        if (isSafe(board, row, col, N))
        {
            // Place the queen at the current position
            board[row][col] = 'Q';

            // Recur for the next column
            solveNQueens(result, board, col + 1, N);

            // Backtrack and remove the queen from the current position
            board[row][col] = '#';
        }
    }
}

vector<vector<string>> solveNQueens(int N)
{
    vector<vector<string>> result;
    vector<string> board(N, string(N, '#')); // Initialize the chessboard

    solveNQueens(result, board, 0, N);

    return result;
}

int main()
{
    int N;
    cout << "Enter the number of queens (N): ";
    cin >> N;

    vector<vector<string>> solutions = solveNQueens(N);

    cout << "All possible solutions:\n";
    for (vector<string> &solution : solutions)
    {
        for (string &row : solution)
        {
            for(char c: row){
                cout<<c<<' ';

            }
            cout<< endl;
        }
        cout << '\n';
    }

    return 0;
}
