#include <iostream>
#include <string>

class Time
{
private:
    int hour;
    int minute;

    void normalizeTime()
    {
        long long total = hour * 60 + minute;
        hour = total / 60;
        minute = total % 60;
    }

public:
    Time(int h, int m) : hour{h}, minute{m}
    {
        normalizeTime();
    }

    std::string display() const
    {
        return std::to_string(hour) + ":" + std::to_string(minute);
    }

    Time operator+(const Time &other) const
    {
        return Time(hour + other.hour, minute + other.minute);
    }
};

int main()
{
    Time t1(1, 30);
    Time t2(2, 45);
    Time t3 = t1 + t2;

    std::cout << "t1 Time is: " << t1.display() << std::endl;
    std::cout << "t2 Time is: " << t2.display() << std::endl;
    std::cout << "t3 Time is: " << t3.display() << std::endl;

    return 0;
}
