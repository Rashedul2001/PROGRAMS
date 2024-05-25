#include <iostream>
#include <vector>

// Function to check if a queen can be placed on board[row][col]
bool isSafe(const std::vector<std::vector<int>> &board, int row, int col, int N) {
    // Check the current column for any existing queens
    for (int i = 0; i < row; i++) {
        if (board[i][col] == 1) {
            return false;
        }
    }

    // Check the upper left diagonal for any existing queens
    for (int i = row, j = col; i >= 0 && j >= 0; i--, j--) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    // Check the upper right diagonal for any existing queens
    for (int i = row, j = col; i >= 0 && j < N; i--, j++) {
        if (board[i][j] == 1) {
            return false;
        }
    }

    return true;
}

// Function to print the board configuration
void printBoard(const std::vector<std::vector<int>> &board, int N) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++) {
            if (board[i][j] == 1) {
                std::cout << "Q ";
            } else {
                std::cout << ". ";
            }
        }
        std::cout << std::endl;
    }
}

// Function to solve N-Queens problem using backtracking
bool solveNQueensUtil(std::vector<std::vector<int>> &board, int row, int N) {
    // Base case: If all queens are placed, return true
    if (row >= N) {
        return true;
    }

    // Consider this row and try placing the queen in all columns one by one
    for (int col = 0; col < N; col++) {
        // Check if the queen can be placed on board[row][col]
        if (isSafe(board, row, col, N)) {
            // Place the queen
            board[row][col] = 1;

            // Recur to place the rest of the queens
            if (solveNQueensUtil(board, row + 1, N)) {
                return true;
            }

            // If placing the queen in board[row][col] doesn't lead to a solution, remove the queen
            board[row][col] = 0; // Backtrack
        }
    }

    // If the queen cannot be placed in any column in this row, return false
    return false;
}

// Function to solve N-Queens problem
void solveNQueens(int N) {
    // Initialize the board with 0s
    std::vector<std::vector<int>> board(N, std::vector<int>(N, 0));

    // Call the utility function to solve the problem
    if (!solveNQueensUtil(board, 0, N)) {
        std::cout << "Solution does not exist" << std::endl;
        return ;
    }

    // Print the solution
    printBoard(board, N);
    return ;
}

int main() {
    int N = 8; // Size of the chessboard (8x8)
    solveNQueens(N);
    return 0;
}
