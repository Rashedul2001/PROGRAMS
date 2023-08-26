#include <iostream>
using namespace std;
void passByValue(int num1)
{
    num1++;
    cout << num1 << endl;
}

void passByPointer(int *num2)
{
    (*num2)++;
    cout << *num2 << endl;
}
void passByReference(int &num3)
{
    num3++;
    cout << num3 << endl;
}

int main(void)
{
    int num1{100}, num2{200}, num3{300};

    cout << "Before Passing: " << num1 << endl;
    passByValue(num1);
    cout << "After Passing" << num1 << endl;
    cout << "\nBefore Passing: " << num2 << endl;
    passByPointer(&num2);
    cout << "After Passing" << num2 << endl;
    cout << "\nBefore Passing: " << num3 << endl;
    passByReference(num3);
    cout << "After Passing" << num3 << endl;
    return 0;
}