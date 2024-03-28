#include <iostream>
#include <vector>

const int N = 10e5 + 10;

bool vis[N];
std::vector<int> g[N];

void bfs(int vertex)
{
    /** Take action on vertex after entering
     * the vertex
     */
    if (vis[vertex])
        return;
    vis[vertex] = true;
    std::cout <<"vertex " <<  vertex << std::endl;

    for (int child : g[vertex])
    {
        /** Take action on child before entering
         * the child node
         */
        std::cout <<"child " <<  child << " " << " vertex "<<  vertex << std::endl;
        bfs(child);
        /** Take action on child after exiting child node
         */
    }
    /** Take action on vertex before
     * exiting the vertex
     */
}

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 0; i < m; i++)
    {
        int v1, v2;
        std::cin >> v1 >> v2;
        g[v1].push_back(v2);
        g[v2].push_back(v1);
    }
    bfs(1);

    return 0;
}
/**
 * Input:
    6 9
    1 3
    1 5
    3 5
    3 4
    3 6
    3 2
    2 6
    4 6
    5 6
*/