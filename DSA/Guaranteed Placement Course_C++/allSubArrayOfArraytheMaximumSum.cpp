#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;
    cin >> n;
    vector<int> vec(n);
    for (auto &it : vec)
    {
        cin >> it;
    }
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = i; j < n; j++)
        {
            int tempSum = 0;
            for (int k = i; k <= j; k++)
            {
                cout << vec[k] << " ";
                tempSum += vec[k];
            }
            sum = max(sum, tempSum);
            cout << endl;
        }
    }
    cout << "The Maximum Sum from the SubArrays is: " << sum << endl;
    return 0;
}
