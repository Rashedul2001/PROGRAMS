#ifndef PLAYER_H
#define PLAYER_H

#include "person.h"

class Player : public Person
{

    friend std::ostream &operator<<(std::ostream &, const Player &);

private:
    std::string m_game{"none"};

public:
    Player() = default;
    Player(const std::string_view);
    Player(const std::string_view, const std::string_view, const std::string_view);
    // ~Player(); we can remove it because we are not allocating dynamic memory
};

#endif