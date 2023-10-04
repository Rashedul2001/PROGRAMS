#include <iostream>
#include "compare.h"

using namespace std;

int main()
{

    int max{FindMax(333, 60)};
    cout << "Maximum is: " << max << endl;
    cout << "Minimum is: " << FindMin(45, 339) << endl;

    return 0;
}
