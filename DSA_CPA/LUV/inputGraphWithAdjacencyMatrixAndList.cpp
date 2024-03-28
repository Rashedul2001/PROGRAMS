#include <iostream>
#include <vector>
#include <utility>

const int N = 1e3 + 10;
int graph1[N][N];
std::vector<std::pair<int, int>> graph2[N];

int main()
{
	int n, m;
	std::cin >> n >> m;
	for (int i = 1; i <= m; i++)
	{
		int v1, v2, wt;
		std::cin >> v1 >> v2 >> wt;
		graph1[v1][v2] = wt;
		graph1[v2][v2] = wt;
		graph2[v1].push_back(std::make_pair(v2, wt));
		graph2[v2].push_back(std::make_pair(v1, wt));
	}

	return 0;
}
/**
 * Input:
	6 9
	1 3 4
	1 5 3
	3 5 2
	3 4 7
	3 6 8
	3 2 9
	2 6 1
	4 6 2
	5 6 3
*/