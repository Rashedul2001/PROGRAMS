#include <iostream>

class Dog
{
private:
    std::string m_name;
    std::string m_breed;
    int *m_age{nullptr};

public:
    Dog(std::string_view name, std::string_view breed, int age);
    ~Dog();
};
Dog::Dog(std::string_view name, std::string_view breed, int age)
{
    m_name = name;
    m_breed = breed;
    m_age = new int;
    *m_age = age;
    std::cout << "Dog Constructor called for " << m_name << std::endl;
}
Dog::~Dog()
{
    delete m_age;
    std::cout << "Dog Destructor called for " << m_name << std::endl;
}
void somefunc()
{
    Dog dog1("fluffy", "local", 2);
}
void another()
{
    Dog *ptr = new Dog("kalu", "Shefered", 3);
    // it wont delete automatically if I dont delete ptr because ptr is on stack but destructor can't access object on stack,, maybe
    delete ptr;
}

int main()
{
    Dog dog1("Rohan", "local", 6);
    somefunc();
    another();

    std::cout << "Done!" << std::endl;

    return 0;
}