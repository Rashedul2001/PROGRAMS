#include <iostream>
using namespace std;

template <typename T>
T maximum(T a, T b);

int main(void)
{

    int a{20}, b{209};
    float x{30.39}, y{3498.9};
    string first{"Rashedul"}, last{"Hasan"};
    cout << "Template for int==>returned: " << maximum(a, b) << endl;
    cout << "Template for Float==>returned: " << maximum(x, y) << endl;
    cout << "Template for String==>returned: " << maximum(first, last) << endl;

    return 0;
}

template <typename T>
T maximum(T a, T b) // it's making a copy of the variable
{
    return (a > b) ? a : b;
}