#include <iostream>
#include <string>
#include <string_view>
class Human
{
private:
    int m_age;
    double m_height;
    std::string m_name;

public:
    Human() = default;
    Human(std::string name, int age) : m_name{name}, m_age{age}
    {
    }
    void speak();
    void sayName()
    {
        std::cout << "the person's name is " << m_name << std::endl;
    }
    void setName(std::string_view name)
    {
        m_name = name;
    }
    std::string &getName()
    {
        return m_name;
    }
    void setHeight(double height)
    {
        m_height = height;
    }
    int getAge()
    {
        return m_age;
    }
    // void show
};

int main()
{
    Human human1("Rohoman", 32); //( ldfjlsd lm,d sdfkj,d flsdfjldskfjdslfdslfjldsfj)

    Human human2;
    int a = 390;
    a = 20;
    std::string name;
    std::cin >> name;

    human2.setHeight(3.3);
    human2.setName(name);
    int newint = a;
    human1.setHeight(3.5);
    std::string human2erName = human2.getName();
    std::cout << "the name of the human2 is " << human2.getName() << std::endl;

    // code is ulta palta<<std::endl;
    return 0;
}
