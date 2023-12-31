#include <iostream>
#include <vector>

using namespace std;

int main()
{
    string s;
    cin >> s;
    vector<int> mem(256, -1);
    int ans = 0, start = -1;
    for (int i = 0; i < s.length(); i++)
    {
        if (mem[s[i]] > start)
            start = mem[s[i]];
        mem[s[i]] = i;
        ans = max(ans, i - start);
    }
    cout << ans << endl;
    return 0;
}
