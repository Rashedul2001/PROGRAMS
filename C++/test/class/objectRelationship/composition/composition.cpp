#include <iostream>
#include <string>
#include "Creature.h"
#include "Point2D.h"

int main()
{
    std::cout << "Enter your name for the Creature:";
    std::string name;
    std::cin >> name;
    Creature creature1{name, {5, 2}};
    while (true)
    {
        std::cout << creature1 << std::endl;
        std::cout << "Enter new X location for the creature(-1 for quit:):";
        int x;
        std::cin >> x;
        if (x == -1)
            break;
        std::cout << "Enter new Y location for the creature(-1 for quit:):";
        int y;
        std::cin >> y;
        if (y == -1)
            break;
        creature1.moveTo(x, y);
    }

    return 0;
}
