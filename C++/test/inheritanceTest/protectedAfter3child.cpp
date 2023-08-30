#include <iostream>
using namespace std;
class Parent
{
protected:
    int protectedValue = 10;

public:
    Parent() = default;
    Parent(int value) : protectedValue{value} {}
    void setProtectedValue(int value) { protectedValue = value; }
    int getProtectedValue() const
    {
        return protectedValue;
    }
};
class FirstChild : protected Parent
{
public:
    FirstChild() = default;
    FirstChild(int value) : Parent{value} {}
};
class SecondChild : protected FirstChild
{
public:
    SecondChild() = default;
    SecondChild(int value) : FirstChild{value} {}
    int getParentProtectedValue() const { return protectedValue; }
    void setParentProtectedValue(int value) { protectedValue = value; }
};

int main()
{
    SecondChild ob2;
    cout << ob2.getParentProtectedValue() << endl;
    ob2.setParentProtectedValue(20);
    cout << ob2.getParentProtectedValue() << endl;
    return 0;

    return 0;
}