#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (auto &i : arr)
    {
        cin >> i;
    }
    int ans = 2, prevDif = arr[1] - arr[0], curr = 2, i = 2;
    while (i < n)
    {
        if (prevDif == arr[i] - arr[i - 1])
        {
            curr++;
        }
        else
        {
            prevDif = arr[i] - arr[i - 1];
            curr = 2;
        }
        ans = max(ans, curr);
        i++;
    }
    cout << ans << '\n';

    return 0;
}