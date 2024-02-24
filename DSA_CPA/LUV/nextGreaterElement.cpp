#include <iostream>
#include <stack>
#include <vector>

using namespace std;

vector<int> getAns(vector<int> &vec)
{
    vector<int> ans(vec.size());
    stack<int> st;
    for (int i = 0; i < vec.size(); i++)
    {
        while (!st.empty() and vec[st.top()] < vec[i])
        {
            ans[st.top()] = i;
            st.pop();
        }
        st.push(i);
    }
    while (!st.empty())
    {
        ans[st.top()] = -1;
        st.pop();
    }
    return ans;
}

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &i : vec)
        cin >> i;
    vector<int> ans = getAns(vec);
    for (int i = 0; i < n; i++)
        cout << vec[i] << " " << (ans[i] == -1 ? -1 : vec[ans[i]]) << endl;

    return 0;
}