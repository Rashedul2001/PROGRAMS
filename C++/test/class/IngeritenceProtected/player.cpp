#include "player.h"
Player::Player(const std::string_view game) : m_game(game) {}
Player::Player(const std::string_view fname, const std::string_view lname, const std::string_view game) : Person{fname, lname}, m_game{game}
{

    // Person{fname,lname};//dont works
    /*   m_firstName = fname; this is a bad practice
      m_lastName = lname; // cant use m_lastName{lname} */
}
std::ostream &operator<<(std::ostream &out, const Player &g)
{
    out << "Person[" << g.get_frist_name() << ' ' << g.get_last_name() << "] Game is " << g.m_game << std::endl;
    return out;
}
