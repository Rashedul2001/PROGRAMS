#include <iostream>
#include <cstdio>
#include <cstdlib>
#include <algorithm>
#include <cmath>
#include <vector>
#include <set>
#include <map>
#include <unordered_set>
#include <unordered_map>
#include <queue>
#include <ctime>
#include <cassert>
#include <complex>
#include <string>
#include <cstring>
#include <chrono>
#include <random>
#include <bitset>
#include <array>
using namespace std;

#ifdef LOCAL
#define eprintf(...)                  \
    {                                 \
        fprintf(stderr, __VA_ARGS__); \
        fflush(stderr);               \
    }
#else
#define eprintf(...) 42
#endif

using ll = long long;
using ld = long double;
using uint = unsigned int;
using ull = unsigned long long;
template <typename T>
using pair2 = pair<T, T>;
using pii = pair<int, int>;
using pli = pair<ll, int>;
using pll = pair<ll, ll>;
mt19937_64 rng(chrono::steady_clock::now().time_since_epoch().count());
ll myRand(ll B)
{
    return (ull)rng() % B;
}

#define pb push_back
#define mp make_pair
#define all(x) (x).begin(), (x).end()
#define fi first
#define se second

clock_t startTime;
double getCurrentTime()
{
    return (double)(clock() - startTime) / CLOCKS_PER_SEC;
}

void solve()
{
    int n;
    ll a = 0, b = 0, x;
    scanf("%d", &n);
    while (n--)
    {
        scanf("%lld", &x);
        if (x >= 0)
            a += x;
        else
            b -= x;
    }
    printf("%lld\n", abs(a - b));
}

int main()
{
    startTime = clock();
    //	freopen("input.txt", "r", stdin);
    //	freopen("output.txt", "w", stdout);
    int t;
    scanf("%d", &t);
    while (t--)
        solve();

    return 0;
}

#include <bits/stdc++.h>

constexpr int P = 998244353;
using i64 = long long;
// assume -P <= x < 2P
int norm(int x)
{
    if (x < 0)
    {
        x += P;
    }
    if (x >= P)
    {
        x -= P;
    }
    return x;
}
template <class T>
T power(T a, i64 b)
{
    T res = 1;
    for (; b; b /= 2, a *= a)
    {
        if (b % 2)
        {
            res *= a;
        }
    }
    return res;
}
struct Z
{
    int x;
    Z(int x = 0) : x(norm(x)) {}
    Z(i64 x) : x(norm(x % P)) {}
    int val() const
    {
        return x;
    }
    Z operator-() const
    {
        return Z(norm(P - x));
    }
    Z inv() const
    {
        assert(x != 0);
        return power(*this, P - 2);
    }
    Z &operator*=(const Z &rhs)
    {
        x = i64(x) * rhs.x % P;
        return *this;
    }
    Z &operator+=(const Z &rhs)
    {
        x = norm(x + rhs.x);
        return *this;
    }
    Z &operator-=(const Z &rhs)
    {
        x = norm(x - rhs.x);
        return *this;
    }
    Z &operator/=(const Z &rhs)
    {
        return *this *= rhs.inv();
    }
    friend Z operator*(const Z &lhs, const Z &rhs)
    {
        Z res = lhs;
        res *= rhs;
        return res;
    }
    friend Z operator+(const Z &lhs, const Z &rhs)
    {
        Z res = lhs;
        res += rhs;
        return res;
    }
    friend Z operator-(const Z &lhs, const Z &rhs)
    {
        Z res = lhs;
        res -= rhs;
        return res;
    }
    friend Z operator/(const Z &lhs, const Z &rhs)
    {
        Z res = lhs;
        res /= rhs;
        return res;
    }
    friend std::istream &operator>>(std::istream &is, Z &a)
    {
        i64 v;
        is >> v;
        a = Z(v);
        return is;
    }
    friend std::ostream &operator<<(std::ostream &os, const Z &a)
    {
        return os << a.val();
    }
};
int main()
{
    std::ios::sync_with_stdio(false);
    std::cin.tie(nullptr);

    int n;
    std::cin >> n;

    std::vector<int> a(n);
    for (int i = 0; i < n; i++)
    {
        int x;
        std::cin >> x;
        a[x - 1]++;
    }

    std::vector<int> c(n + 1);
    for (int i = 0; i < n; i++)
    {
        c[a[i]]++;
    }

    std::vector<int> lim(n + 1);
    int v = 0, res = n;
    for (int i = 0; i <= n; i++)
    {
        v += i * c[i];
        res -= c[i];
        lim[i] = v + res * i;
    }

    std::vector dp(n + 1, std::vector<Z>(n + 1));
    dp[0][0] = 1;
    for (int x = n; x; x--)
    {
        for (int i = 0; i + x <= n; i++)
        {
            for (int j = 0; j * x <= i; j++)
            {
                if (i + x <= lim[j + 1])
                {
                    dp[i + x][j + 1] += dp[i][j];
                }
            }
        }
    }

    auto ans = std::accumulate(dp[n].begin(), dp[n].end(), Z(0));
    std::cout << ans << "\n";

    return 0;
}