#include <iostream>
#include <vector>
#include <algorithm>

// Function to solve 0/1 knapsack problem
int knapsack(int W, const std::vector<int> &weights, const std::vector<int> &values, int n) {
    // Create a 2D array to store the maximum value that can be obtained for each subproblem
    std::vector<std::vector<int>> K(n + 1, std::vector<int>(W + 1));

    // Build the table K[][] in a bottom-up manner
    for (int i = 0; i <= n; ++i) {
        for (int w = 0; w <= W; ++w) {
            if (i == 0 || w == 0) {
                K[i][w] = 0;
            } else if (weights[i - 1] <= w) {
                K[i][w] = std::max(values[i - 1] + K[i - 1][w - weights[i - 1]], K[i - 1][w]);
            } else {
                K[i][w] = K[i - 1][w];
            }
        }
    }

    // The maximum value that can be obtained is in K[n][W]
    return K[n][W];
}

int main() {
    int n = 3; // Number of items
    std::vector<int> values = {60, 100, 120}; // Values of items
    std::vector<int> weights = {10, 20, 30}; // Weights of items
    int W = 50; // Maximum capacity of knapsack

    int maxValue = knapsack(W, weights, values, n);

    std::cout << "Maximum value that can be obtained = " << maxValue << std::endl;

    return 0;
}
