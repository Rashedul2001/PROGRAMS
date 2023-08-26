#include <iostream>

// using namespace std;

class Storage;

class Display
{
private:
    bool displayintFirst{};

public:
    Display(bool in) : displayintFirst(in) {}
    void displayitem(const Storage &storage);
};

class Storage
{
private:
    int m_value1{};
    double m_value2{};

public:
    Storage(int value1, double value2) : m_value1{value1}, m_value2{value2} {}
    friend void Display::displayitem(const Storage &storage);
};

void Display::displayitem(const Storage &storage)
{
    if (displayintFirst)
        std::cout << storage.m_value1 << " " << storage.m_value2 << std::endl;
    else
        std::cout << storage.m_value2 << " " << storage.m_value1 << std::endl;
}

int main()
{
    Storage store1(5, 3.14);
    Display display(false);
    display.displayitem(store1);

    return 0;
}