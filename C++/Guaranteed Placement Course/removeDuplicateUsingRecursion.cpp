#include <iostream>
using namespace std;
string remDup(string s)
{
    if (s.empty())
        return s;
    char ch = s.at(0);
    string ans = remDup(s.substr(1));
    if (ch == ans[0])
    {
        return ans;
    }
    else
        return ch + ans;
}

int main()
{
    cout << remDup("aaaabbbbbccccccdddddd");

    return 0;
}