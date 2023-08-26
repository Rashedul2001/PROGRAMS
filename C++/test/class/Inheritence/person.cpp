#include "person.h"

// Person::Person() {}
Person::Person(const std::string_view firstName, const std::string_view lastName) : m_firstName{firstName}, m_lastName{lastName} {}
std::ostream &operator<<(std::ostream &out, const Person p1)
{
    out << "Person[" << p1.m_firstName << ' ' << p1.m_lastName << "]" << std::endl;

    return out;
}

void Person::set_last_name(std::string_view ln)
{
    m_lastName = ln;
}
Person::~Person() {}