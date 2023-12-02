// 1 indexed query

#include <iostream>
#include <vector>

int main()
{
    int n;
    std::cin >> n;
    std::vector<int> array(n);

    for (int i = 0; i < n; i++)
    {
        std::cin >> array[i];
    }
    std::vector<int> prefArray(n + 1, 0);
    for (int i = 1; i <= n; i++)
        prefArray[i] = array[i - 1] + prefArray[i - 1];
    int query;
    std::cin >> query;
    while (query--)
    {
        int first, last;
        std::cin >> first >> last;
        std::cout << prefArray[last] - prefArray[first - 1] << std::endl;
    }
    return 0;
}
