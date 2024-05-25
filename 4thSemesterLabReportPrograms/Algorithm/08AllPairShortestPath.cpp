#include <iostream>
#include <vector>
#include <algorithm>

const int INF = 1e9; // Define a large value as infinity

// Function to print the distance matrix
void printMatrix(const std::vector<std::vector<int>> &dist, int n)
{
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if (dist[i][j] == INF)
            {
                std::cout << "INF ";
            }
            else
            {
                std::cout << dist[i][j] << " ";
            }
        }
        std::cout << std::endl;
    }
}

// Function to implement Floyd-Warshall algorithm
void floydWarshall(std::vector<std::vector<int>> &dist, int n)
{
    // dist[i][j] will be the shortest distance from vertex i to vertex j
    for (int k = 0; k < n; ++k)
    {
        // Pick all vertices as source one by one
        for (int i = 0; i < n; ++i)
        {
            // Pick all vertices as destination for the above picked source
            for (int j = 0; j < n; ++j)
            {
                // If vertex k is on the shortest path from i to j, then update dist[i][j]
                if (dist[i][k] < INF && dist[k][j] < INF)
                {
                    dist[i][j] = std::min(dist[i][j], dist[i][k] + dist[k][j]);
                }
            }
        }
    }
}

int main()
{
    int n = 4; // Number of vertices
    std::vector<std::vector<int>> dist = {
        {0, 3, INF, 7},
        {8, 0, 2, INF},
        {5, INF, 0, 1},
        {2, INF, INF, 0}};

    // Print initial distance matrix
    std::cout << "Initial distance matrix:\n";
    printMatrix(dist, n);

    // Run Floyd-Warshall algorithm
    floydWarshall(dist, n);

    // Print the shortest distance matrix
    std::cout << "\nShortest distance matrix:\n";
    printMatrix(dist, n);

    return 0;
}
