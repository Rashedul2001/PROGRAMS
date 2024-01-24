#include <iostream>

const int N = 1e7 + 10;
long long int arr[N];

int main()
{
    int n, m;
    std::cin >> n >> m;
    while (m--)
    {
        int a, b, c;
        std::cin >> a >> b >> c;
        arr[a] += c;
        arr[b + 1] -= c;
    }
    for (int i = 1; i <= n; i++)
        arr[i] += arr[i - 1];
    long long mx = INT_MIN;
    for (int i = 1; i <= n; i++)
        mx = std::max(arr[i], mx);

    std::cout << mx << std::endl;

    return 0;
}
