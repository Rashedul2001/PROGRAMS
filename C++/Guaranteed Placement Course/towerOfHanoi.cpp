#include <iostream>
using namespace std;

void towerOfHanoi(int n, char src, char dest, char helper)
{
    static int count = 0;
    if (n == 0)
        return;

    towerOfHanoi(n - 1, src, helper, dest);
    count++;
    cout << count << ": Move from " << src << " to " << dest << endl;
    towerOfHanoi(n - 1, helper, dest, src);
}
int main()
{
    towerOfHanoi(64, 'A', 'C', 'B');
    return 0;
}