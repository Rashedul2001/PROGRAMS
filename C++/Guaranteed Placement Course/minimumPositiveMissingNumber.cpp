#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> arr(n);
    vector<bool> vec(INT_MAX, false);

    for (auto &i : arr)
    {
        cin >> i;
        if (i >= 0)
        {
            vec[i] = true;
        }
    }
    for (int i = 0; i < INT_MAX; i++)
    {
        if (vec[i] == false)
        {
            cout << "Ans is: " << i << endl;
            break;
        }
    }
    return 0;
}
