#include "person.h"

int person::person_count = 5;

person::person(std::string name_parameter, int age_parameter) : Full_name{name_parameter}, age{age_parameter}
{
    person_count++;
}