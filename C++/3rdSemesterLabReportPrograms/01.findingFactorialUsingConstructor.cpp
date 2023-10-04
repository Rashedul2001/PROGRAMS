#include <iostream>
using namespace std;
class Factorial
{
private:
    int baseNumber;
    unsigned long long int factorial;

public:
    Factorial() = default;
    Factorial(int value) : baseNumber{value}, factorial{1} { calculate(baseNumber); }
    void calculate(int number)
    {
        for (int i = 2; i <= number; i++)
        {
            factorial *= i;
        }
    }
    unsigned long long int getFactResult() const { return factorial; }
};
int main()
{
    cout << "Enter a number: ";
    int num;
    cin >> num;
    if (num < 0)
    {
        cout << "Invalid input. Please Enter a Positive number." << endl;
        return 0;
    }

    Factorial fact1(num);
    cout << "The Factorial of " << num << " is: " << fact1.getFactResult() << endl;

    return 0;
}