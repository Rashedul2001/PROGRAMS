#ifndef POINT2D_H
#define POINT2D_H

#include <iostream>

class Point2D
{
private:
    int m_x;
    int m_y;

public:
    Point2D(int x, int y) : m_x{x}, m_y{y} {}
    Point2D() : m_x{}, m_y{} {}
    friend std::ostream &operator<<(std::ostream &print, const Point2D &point)
    {
        print << '(' << point.m_x << " , " << point.m_y << " )";
        return print;
    }
    void setPoint(int x, int y)
    {
        m_x = x;
        m_y = y;
    }
};
#endif
