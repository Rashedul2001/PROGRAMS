#include <iostream>
#include <vector>
#include <queue>
#include <climits>

using namespace std;

// Structure to represent a graph
class Graph {
public:
    int V; // Number of vertices
    vector<vector<int>> adjMatrix; // Adjacency matrix

    Graph(int V);
    void addEdge(int u, int v, int weight);
    void primMST();
};

Graph::Graph(int V) {
    this->V = V;
    adjMatrix.resize(V, vector<int>(V, 0));
}

void Graph::addEdge(int u, int v, int weight) {
    adjMatrix[u][v] = weight;
    adjMatrix[v][u] = weight;
}

void Graph::primMST() {
    vector<int> key(V, INT_MAX); // Values to pick minimum weight edge
    vector<int> parent(V, -1); // Array to store constructed MST
    vector<bool> inMST(V, false); // To keep track of vertices included in MST

    // Priority queue to pick minimum weight edge
    priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>> pq;
    
    // Start from the first vertex (index 0)
    key[0] = 0;
    pq.push({0, 0}); // (key, vertex)

    while (!pq.empty()) {
        int u = pq.top().second;
        pq.pop();

        inMST[u] = true; // Include vertex in MST

        for (int v = 0; v < V; v++) {
            int weight = adjMatrix[u][v];
            if (weight && !inMST[v] && weight < key[v]) {
                key[v] = weight;
                pq.push({key[v], v});
                parent[v] = u;
            }
        }
    }

    // Print the MST
    cout << "Edge \tWeight\n";
    for (int i = 1; i < V; i++) {
        cout << parent[i] << " - " << i << "\t" << adjMatrix[i][parent[i]] << " \n";
    }
}

int main() {
    int V = 5; // Number of vertices in the graph
    Graph g(V);

    g.addEdge(0, 1, 2);
    g.addEdge(0, 3, 6);
    g.addEdge(1, 2, 3);
    g.addEdge(1, 3, 8);
    g.addEdge(1, 4, 5);
    g.addEdge(2, 4, 7);
    g.addEdge(3, 4, 9);

    g.primMST();

    return 0;
}
