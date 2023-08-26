#include <iostream>
#include <vector>
#include <numeric>
void crossOut(std::vector<int> &v, int n, int k)
{
    int L;
    if (v[k] == 1)
        return;
    for (int i = 2, L = k * k; L < n; i++)
    {
        L = i * k;
        v[L] = 1;
    }
}

int main()
{
    int n;
    std::vector<int> v;

    std::cout << "From How Many Numeber Do You Want To Find The Prime Number? " << std::endl;
    std::cin >> n;
    v.resize(n + 1);
    std::iota(v.begin(), v.end(), 0); // std::iota(v.begin()+1, v.end(), 1);
    for (int i{2}; i * i <= n; i++)
        crossOut(v, n, i);
    for (int i = 2; i <= n; i++)
    {
        if (v[i] != 1)
            std::cout << " " << v[i];
    }
    return 0;
}
