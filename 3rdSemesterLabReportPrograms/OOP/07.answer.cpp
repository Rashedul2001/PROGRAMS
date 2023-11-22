#include <iostream>
class Number
{

private:
    int data;

public:
    Number(int num) : data{num} {}
    bool operator>(const Number &other) const
    {
        if (data > other.data)
            return true;
        else
            return false;
    }
    bool operator<(const Number &other) const
    {
        if (data < other.data)
            return true;
        else
            return false;
    }

    friend std::ostream &operator<<(std::ostream &out, Number &num)
    {
        std::cout << num.data;
        return out;
    };
};

int main()
{

    Number num1(623);
    Number num2(26);
    std::cout << "The largest number is " << (num1 > num2 ? num1 : num2) << " and the smallest number is " << (num1 < num2 ? num1 : num2) << std::endl;

    return 0;
}