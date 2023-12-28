#include <iostream>
const int m = 1e7;
int hash[m];

int main()
{
    int n;
    std::cin >> n;
    int temp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> temp;
        hash[temp]++;
    }
    int q;
    std::cin >> q;
    while (q--)
    {
        int x;
        std::cin >> x;
        std::cout << hash[x] << std::endl;
    }

    return 0;
}
