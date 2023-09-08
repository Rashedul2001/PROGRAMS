#include <iostream>

int knapSack(int value[], int wt[], int n, int W)
{
    if (n == 0 || W == 0)
    {
        return 0;
    }
    if (wt[n - 1] >= W)
    {
        return knapSack(value, wt, n - 1, W);
    }

    return std::max(knapSack(value, wt, n - 1, W - wt[n - 1]) + value[n - 1], knapSack(value, wt, n - 1, W));
}

int main()
{
    int n;
    std::cin >> n;
    int W;
    std::cin >> W;
    int value[n];
    int wt[n];
    for (int i = 0; i < n; i++)
        std::cin >> value[i];
    for (int i = 0; i < n; i++)
        std::cin >> wt[i];
    std::cout << knapSack(value, wt, n, W) << std::endl;

    return 0;
}