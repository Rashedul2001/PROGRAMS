#include <iostream>
#include <string>

using namespace std;

class Dog
{

public:
    Dog() = default;
    Dog(string name_param, string bread_param, int age_param) // we could use string_view to ouvercome unnecessary copies of string for that we have to include string view
    {
        name = name_param;
        breed = bread_param;
        p_age = new int{age_param};
    }
    void show()
    {
        cout << "Name: " << name << "\nBreed: " << breed << "\nAge: " << *p_age << endl;
    }
    ~Dog(); // we can define this here or outsid the class
private:
    string name = "Rohan";
    string breed = "local";
    int *p_age = {nullptr};
};

Dog::~Dog()
{
    delete p_age;
    // it will automatically called if you don't call it
    // cout << "Dog Destructor called." << endl;
}

int main(void)
{
    Dog Dog1("Rohan", "village_local", 2);
    Dog1.show();
    Dog1.~Dog();
    // cout << "Done!" << endl;

    return 0;
}
