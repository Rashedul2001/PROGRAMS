// #include "person.h"
#include "player.h"
Player::Player(const std::string_view game) : m_game{game} {}
std::ostream &operator<<(std::ostream &out, const Player &g)
{
    out << "Person[" << g.get_frist_name() << ' ' << g.get_last_name() << "] Game is " << g.m_game << std::endl;
    return out;
}
