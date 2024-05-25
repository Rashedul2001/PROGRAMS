#include <iostream>
#include <vector>
#include <queue>
#include <utility>

const int INF = 1e9; // Define a large value as infinity

// Function to find the shortest path from a single source to all other vertices
void dijkstra(int source, const std::vector<std::vector<std::pair<int, int>>> &adj, std::vector<int> &dist) {
    int n = adj.size(); // Number of vertices

    // Priority queue to store (distance, vertex) pairs
    std::priority_queue<std::pair<int, int>, std::vector<std::pair<int, int>>, std::greater<std::pair<int, int>>> pq;
    dist.assign(n, INF); // Initialize distances with infinity
    dist[source] = 0; // Distance to the source is 0
    pq.push({0, source}); // Push the source with distance 0

    while (!pq.empty()) {
        int u = pq.top().second; // Get the vertex with the smallest distance
        int d = pq.top().first; // Get the smallest distance
        pq.pop();

        // If the distance in pq is greater than the current known distance, skip it
        if (d > dist[u]) continue;

        // Explore all adjacent vertices of u
        for (const auto &edge : adj[u]) {
            int v = edge.first;
            int weight = edge.second;

            // Relax the edge (u, v)
            if (dist[u] + weight < dist[v]) {
                dist[v] = dist[u] + weight;
                pq.push({dist[v], v});
            }
        }
    }
}

// Function to print the shortest distances from the source
void printShortestPaths(int source, const std::vector<int> &dist) {
    std::cout << "Shortest distances from source vertex " << source << ":\n";
    for (int i = 0; i < dist.size(); ++i) {
        if (dist[i] == INF) {
            std::cout << "Vertex " << i << ": INF\n";
        } else {
            std::cout << "Vertex " << i << ": " << dist[i] << "\n";
        }
    }
}

int main() {
    int n = 5; // Number of vertices
    std::vector<std::vector<std::pair<int, int>>> adj(n);

    // Example graph with edges (u, v, weight)
    adj[0].emplace_back(1, 10);
    adj[0].emplace_back(4, 5);
    adj[1].emplace_back(2, 1);
    adj[1].emplace_back(4, 2);
    adj[2].emplace_back(3, 4);
    adj[3].emplace_back(0, 7);
    adj[3].emplace_back(2, 6);
    adj[4].emplace_back(1, 3);
    adj[4].emplace_back(2, 9);
    adj[4].emplace_back(3, 2);

    int source = 0; // Define the source vertex
    std::vector<int> dist; // Vector to store shortest distances

    // Find the shortest paths from the source
    dijkstra(source, adj, dist);

    // Print the shortest paths
    printShortestPaths(source, dist);

    return 0;
}
