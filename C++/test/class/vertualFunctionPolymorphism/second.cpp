/**
 * @brief When animal.speak() is evaluated, the program notes that Animal::speak() is a virtual function
 * In the case where animal is referencing the Animal portion of a Cat object,
 *  the program looks at all the classes between Animal
 * and Cat to see if it can find a more derived function. In that case,
 *  it finds Cat::speak(). In the case where animal references
 *  the Animal portion of a Dog object, the program resolves the function call to Dog::speak().
 * Note that we didn’t make Animal::getName() virtual. This is because getName() is never overridden in any
 *  of the derived classes, therefore there is no need.
 */
#include <iostream>
#include <string>
#include <string_view>

class Animal
{
protected:
    std::string mName{};
    Animal(std::string_view name) : mName{name} {}

public:
    const std::string &getName() const { return mName; }
    virtual std::string_view speak() const { return "???"; }
};
class Dog : public Animal
{
public:
    Dog(std::string_view name) : Animal{name} {}
    std::string_view speak() const { return "Woof"; }
};
class Cat : public Animal
{
public:
    Cat(std::string_view name) : Animal{name} {}
    std::string_view speak() const { return " Meow"; }
};
void report(Animal &animal)
{
    std::cout << animal.getName() << " says " << animal.speak() << std::endl;
}

int main()
{
    Cat cat{"Fred"};
    Dog dog{"Garbo"};

    report(cat);
    report(dog);
    std::cout << "\n\n";
    Cat fred{"Fred"};
    Cat misty{"Misty"};
    Cat zeke{"Zeke"};

    Dog garbo{"Garbo"};
    Dog pooky{"Pooky"};
    Dog truffle{"Truffle"};

    Animal *animalList[]{&fred, &misty, &zeke, &garbo, &pooky, &truffle};
    for (auto animal : animalList)
    {
        report(*animal);
    }
    return 0;
}