#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v{1,3,6,9};
    v.erase(v.end());
    std::cout<<(*v.rbegin());

    return 0;
}