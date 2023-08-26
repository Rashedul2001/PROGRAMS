#include <iostream>
#include <vector>

using namespace std;

void sieve(int n)
{
    vector<int> vec(n, 0);
    for (int i = 2; i <= n; i++)
    {
        if (vec[i] == 0)
        {
            for (int j = i * i; j <= n; j += i)
            {
                vec[j] = 1;
            }
        }
    }

    for (int i = 2; i <= n; i++)
    {
        if (vec[i] == 0)
        {
            cout << i << " ";
        }
    }
}
int main()
{

    int num;
    cin >> num;
    cout << "Prime Numbers till " << num << " are: ";
    sieve(num);

    return 0;
}
