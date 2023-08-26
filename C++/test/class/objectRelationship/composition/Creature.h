#ifndef CREATURE_H
#define CREATURE_H

#include <iostream>
#include <string>
#include "Point2D.h"

class Creature
{
private:
    std::string m_name;
    Point2D m_position;

public:
    Creature(const std::string &name, const Point2D &position) : m_name(name), m_position(position) {}
    friend std::ostream &operator<<(std::ostream &print, const Creature &creature)
    {
        print << creature.m_name << " is at position " << creature.m_position << std::endl;
        return print;
    }
    void moveTo(int x, int y)
    {
        m_position.setPoint(x, y);
    }
};
#endif
