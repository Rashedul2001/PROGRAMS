#include <iostream>
#include <vector>
#include <algorithm>

class Person
{
public:
    Person(int a, char ch) : age{a}, name{ch} {}
    int age;
    char name;
};

int main()
{
    Person a{35, 'a'}, b{6, 'b'}, c{60, 'c'}, d{20, 'd'},d{5,'d'};
    std::vector<Person> personList{a, b, c, d};
    std::sort(personList.begin(), personList.end(), [](Person &a, Person &b)
              { return a.age < b.age; });

    for (auto it : personList)
    {
        std::cout << it.name << " " << it.age << std::endl;
    }

    auto isEven = [](Person &a)
    { return a.age % 2 == 0; };
    auto evenNumbers=std::count_if(personList.begin(), personList.end(),isEven);
    std::cout<<"Total Even: "<<evenNumbers << std::endl;

    return 0;
}