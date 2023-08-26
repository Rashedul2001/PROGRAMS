#include <iostream>
#include "constant.h"
using namespace std;
class cylinder
{
public:
    // functions or methods
    double volume()
    {
        return PI * radius * radius * hight;
    }
    // constractor
    cylinder() = default;
    // this will be used if called the function not initialized member value
    // cylinder() // if it is not used the initialized member value will be used
    // {
    //     radius = 8.1;
    //     hight = 6.7;
    // }

    cylinder(double a, double b)
    {
        radius = a;
        hight = b;
    }
    // getters and setters

    double get_radius()
    {
        return radius;
    }
    double get_hight()
    {
        return hight;
    }
    void set_radius(double rad)
    {
        radius = rad;
    }
    void set_hight(double high)
    {
        hight = high;
    }

    // members
private:
    double radius{1};
    double hight{1};
};

int main()
{

    // object
    cylinder cylinder1; // if you want to get cylinder(empty) constructor you shouldn't use ()//now default
    cout << "volume: " << cylinder1.volume() << endl;

    /*  cylinder1.radius=3.0;
    cylinder1.hight=9.5;
      */

    cylinder cylinder2(3.7, 93);
    cout << "voulume: " << cylinder2.volume() << endl;

    cout << "cylinder2 radius: " << cylinder2.get_radius() << endl;
    cout << "Setting the radius to 2.0" << endl;
    cylinder2.set_radius(2.0);
    cout << "voulume: " << cylinder2.volume() << endl;

    return 0;
}