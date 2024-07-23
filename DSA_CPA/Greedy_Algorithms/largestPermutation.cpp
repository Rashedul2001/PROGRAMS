#include <iostream>
#include <vector>
#include <map>

int main()
{

    int n, b;
    std::cin >> n >> b;
    std::vector<int> vec(n);
    std::map<int, int> mp;
    for (int i = 0; i < n; i++)
    {
        std::cin >> vec[i];
        mp[vec[i]] = i;
    }
    int i = 0, mx = n;

    while (b and i < n)
    {
        int maxPos = mp[mx];
        if (i != maxPos)
        {
            std::swap(vec[i], vec[maxPos]);
            std::swap(mp[vec[i]], mp[vec[maxPos]]);
            b--;
        }
        i++;
        mx--;
    }

    for (auto it : vec)
    {
        std::cout << it << " ";
    }

    return 0;
}