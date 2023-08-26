#include <iostream>
#include <string>
#include <string_view>
class class1
{
public:
    virtual std::string_view getName(int x) { return "A"; }
    virtual std::string_view getName2(int x) { return "A2"; }
};

class class2 : public class1
{
    std::string_view getName(short int x) { return "B"; }   // it's parameter is not the same as parent
    std::string_view getName2(int x) const { return "B2"; } // it has a const in it
};
// class class2 : public class1
// {
//      std::string_view getName(short int x) override { return "B"; }
//      std::string_view getName(int x) const override { return "B2"; }
// };

int main()
{
    class2 b;
    class1 &printOut{b};
    std::cout << printOut.getName(2) << std::endl;
    std::cout << printOut.getName2(2) << std::endl;

    return 0;
}
