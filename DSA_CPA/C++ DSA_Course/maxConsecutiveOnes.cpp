#include <iostream>
using namespace std;
#include <vector>

int main()
{
    int n;
    cin >> n;
    int k;
    cin >> k;

    vector<int> vec(n);
    for (auto &I : vec)
        cin >> I;
    int zeroCount = 0;
    int i = 0;
    int ans = 0;
    for (int j = 0; j < n; j++)
    {
        if (vec[j] == 0)
            zeroCount++;
        while (zeroCount > k)
        {
            if (vec[i] == 0)
                zeroCount--;
            i++;
        }
        ans = max(ans, j - i +1);
    }
    cout << ans << endl;
    return 0;
}
