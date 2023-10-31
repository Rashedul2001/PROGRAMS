#include <iostream>

template <typename type>
class myContainer
{
private:
    type data;

public:
    myContainer(const type data) : data{data} {}
    type getValue() const { return this->data; }
};

int main()
{
    myContainer<int> intContainer(30);
    std::cout << intContainer.getValue() << std::endl;

    myContainer<std::string> stringContainer("Rashedul");
    std::cout << stringContainer.getValue() << std::endl;

    return 0;
}
