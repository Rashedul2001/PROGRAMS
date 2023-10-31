#include <iostream>
#include <cstring>

template <typename t>
class myContainer
{
private:
    t data;

public:
    myContainer(const t data) : data{data} {}
    t show() { std::cout << data << std::endl; }
};
template <>
class myContainer<std::string>
{
private:
    std::string data;

public:
    myContainer(const std::string) : data{data} {}
    std::string show() { std::cout << "String type data: " << data << std::endl; }
};

template <typename t>
t add(t a, t b)
{
    return a + b;
}
template <>
const char *add(const char *a, const char *b)
{
    int len = std::strlen(a) + std::strlen(b) + 1;
    char *result = new char[len];
    std::strcpy(result, a);
    std::strcat(result, " ");
    std::strcat(result, b);
    return result;
};

int main()
{
    std::cout << add(6, 7) << std::endl;
    std::cout << add("Rashedul", "SR") << std::endl;
    // class specialization is OK

    return 0;
}