#include <iostream>
using namespace std;

int &getLargest(int &x, int &y) // again like getting an argument and creating a reference....return type is a reference...Look below
{
    if (x > y)
    {
        return x; // now we are passing value... but of anoher reference
    }
    else
    {
        return y; // now we are passing value... but of anoher reference
    }
}

int main()
{
    int a = 5;
    int b = 10;
    // we are assigning a reference to anotehr reference
    int &largest = getLargest(a, b); // here I'm passing value and there in userFunc I created the reference
    largest = 20;                    // modifies b since it was larger

    cout << "a = " << a << endl; // prints "a = 5"
    cout << "b = " << b << endl; // prints "b = 20"

    return 0;
}
