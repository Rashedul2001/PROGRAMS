#include <iostream>
using namespace std;

class Point
{
private:
    int m_x{};
    int m_y{};
    int m_z{};

public:
    Point(int x = 0.0, int y = 0.0, int z = 0.0) : m_x{x}, m_y{y}, m_z{z} {}

    friend ostream &operator<<(ostream &out, const Point &point);
};
// these const are your choice
ostream &operator<<(ostream &out, const Point &point)
{
    out << "Point(" << point.m_x << ',' << point.m_y << ',' << point.m_z << ')' << endl;
    return out;
}

int main()
{
    Point p1{3, 99, 4};
    cout << p1 << '\n';
    p1; // like cout; form return out;==> cout are the same object
}