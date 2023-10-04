#include <iostream>
#include <array>
#include <string_view>
#include <string>

class Animal
{
protected:
    std::string m_name{};
    Animal(std::string_view name) : m_name{name} {}
    Animal(const Animal &other) = default;

    virtual ~Animal() = default;

    Animal &operator=(const Animal &other) = default;

public:
    virtual std::string_view getName() const { return m_name; };
    virtual std::string_view speak() const { return "????"; };
};
class Cat : public Animal
{
public:
    Cat(std::string_view name) : Animal{name} {}
    virtual std::string_view speak() const { return "Meow"; }
};
class Dog : public Animal
{
public:
    Dog(std::string_view name) : Animal{name} {}
    virtual std::string_view speak() const { return "Woof"; }
};

int main()
{
    const Cat cat{"Babuni"};
    std::cout << "Cat is named " << cat.getName() << ", and it says " << cat.speak() << "\n";
    const Dog dog{"Tiger"};
    std::cout << "Dog is named " << dog.getName() << ", and it says " << dog.speak() << '\n';
    const Animal *pAnimal{&cat};
    std::cout << "pAnimal is named " << pAnimal->getName() << ", and it says " << pAnimal->speak() << '\n';
    const Animal &rAnimal{dog};

    std::cout << "rAnimal is named " << rAnimal.getName() << ", and it says " << rAnimal.speak() << '\n';

    std::cout << "\nlist of object " << std::endl;
    const Cat cat1{"A"}, cat2{"B"}, cat3{"C"}, cat4{"D"};
    const Dog dog1{"E"}, dog2{"F"}, dog3{"G"}, dog4{"H"};
    // now list by to_array
    // in auto we can write std::array<const Animal *, 8>
    const auto animalArray{std::to_array<const Animal *>({&cat1, &cat2, &cat3, &cat4, &dog1, &dog2, &dog3, &dog4})};
    for (auto animal : animalArray)
    {
        std::cout << animal->getName() << " says " << animal->speak() << std::endl;
    }

    return 0;
}