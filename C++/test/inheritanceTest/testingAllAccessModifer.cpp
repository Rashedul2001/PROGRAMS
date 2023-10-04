#include <iostream>
using namespace std;
class Parent
{
private:
    int parentPrivateValue = 10;

protected:
    int parentProtectedValue = 20;

public:
    int parentPublicValue = 30;
    Parent() = default;
    Parent(int v1, int v2, int v3) : parentPrivateValue{v1}, parentProtectedValue{v2}, parentPublicValue{v3} {}
};
class Child : protected Parent
{
private:
    int childPrivateValue = 40;

protected:
    int childProtectedValue = 50;

public:
    int childPublicValue = 60;
    Child() = default;
};
class grandChild : private Child
{
private:
    int grandChildPrivateValue = 70;

protected:
    int grandChildProtectedValue = 80;

public:
    int grandChildPublicValue = 90;
    grandChild() = default;
    int getParentProtectedValue() { return parentProtectedValue; }
    int getParentPublicValue() { return parentPublicValue; }
};
int main()
{
    grandChild grand;
    cout << grand.getParentProtectedValue();
    return 0;

    return 0;
}
