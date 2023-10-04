#ifndef PERSON_H
#define PERSON_H

#include <iostream>
class person
{
public:
    person(std::string name_parameter, int age_parameter);
    void print_info() const
    {
        std::cout << "Name: " << Full_name << ", Age: " << age << std::endl;
    }

private:
    std::string Full_name;
    int age;

public:
    static int person_count;
};
#endif