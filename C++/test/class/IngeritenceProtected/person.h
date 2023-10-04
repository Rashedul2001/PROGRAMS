#ifndef PERSON_H
#define PERSON_H
#include <iostream>

// #include<string_view>
// #include<string>

class Person
{
protected:
    std::string m_firstName{"Mysterious"};
    std::string m_lastName{"Person"};

public:
    Person() = default;
    Person(const std::string_view, const std::string_view);
    ~Person();

    // Getters
    std::string get_frist_name() const { return m_firstName; }
    std::string get_last_name() const { return m_lastName; }

    // setters

    void set_frist_name(std::string_view fn) { m_firstName = fn; }
    void set_last_name(std::string_view ln);
    // {
    //     m_lastName = ln;
    // }

    friend std::ostream &operator<<(std::ostream &, const Person);
};

#endif
