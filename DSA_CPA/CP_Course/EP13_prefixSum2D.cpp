#include <iostream>
const int N = 1e3 + 10;
int matrix[N][N];
long long prefMatrix[N][N];

int main()
{
    int n, m;
    std::cin >> n >> m;
    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            std::cin >> matrix[i][j];

    for (int i = 1; i <= n; i++)
        for (int j = 1; j <= m; j++)
            prefMatrix[i][j] = matrix[i][j] + prefMatrix[i - 1][j] + prefMatrix[i][j - 1] - prefMatrix[i - 1][j - 1];

    int query;
    std::cin >> query;
    while (query--)
    {
        int a, b, c, d;
        std::cin >> a >> b >> c >> d;
        std::cout << prefMatrix[c][d] - prefMatrix[a - 1][d] - prefMatrix[c][b - 1] + prefMatrix[a - 1][b - 1] << std::endl;
    }

    return 0;
}