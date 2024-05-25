#include <iostream>
#include <vector>
#include <list>
#include <algorithm>

using namespace std;

// Graph class represents a undirected graph using adjacency list representation
class Graph {
    int V; // Number of vertices
    list<int> *adj; // Pointer to an array containing adjacency lists
public:
    Graph(int V); // Constructor
    void addEdge(int v, int w); // To add an edge to graph
    void greedyColoring(); // Prints greedy coloring of the vertices
};

Graph::Graph(int V) {
    this->V = V;
    adj = new list<int>[V];
}

void Graph::addEdge(int v, int w) {
    adj[v].push_back(w);
    adj[w].push_back(v); // Since the graph is undirected
}

void Graph::greedyColoring() {
    vector<int> result(V, -1); // Assigns colors (0 is the first color)

    // Assign the first color to the first vertex
    result[0] = 0;

    // A temporary array to store the available colors. False value of available[cr] would mean that the color cr is assigned to one of its adjacent vertices
    vector<bool> available(V, false);

    // Assign colors to remaining V-1 vertices
    for (int u = 1; u < V; u++) {
        // Process all adjacent vertices and flag their colors as unavailable
        for (auto i : adj[u])
            if (result[i] != -1)
                available[result[i]] = true;

        // Find the first available color
        int cr;
        for (cr = 0; cr < V; cr++)
            if (!available[cr])
                break;

        result[u] = cr; // Assign the found color

        // Reset the values back to false for the next iteration
        for (auto i : adj[u])
            if (result[i] != -1)
                available[result[i]] = false;
    }

    // Print the result
    for (int u = 0; u < V; u++)
        cout << "Vertex " << u << " --->  Color " << result[u] << endl;
}

int main() {
    Graph g(5);
    g.addEdge(0, 1);
    g.addEdge(0, 2);
    g.addEdge(1, 2);
    g.addEdge(1, 3);
    g.addEdge(2, 3);
    g.addEdge(3, 4);

    cout << "Coloring of graph 1\n";
    g.greedyColoring();

    Graph g2(5);
    g2.addEdge(0, 1);
    g2.addEdge(0, 2);
    g2.addEdge(1, 2);
    g2.addEdge(1, 4);
    g2.addEdge(2, 4);
    g2.addEdge(4, 3);

    cout << "\nColoring of graph 2\n";
    g2.greedyColoring();

    return 0;
}
