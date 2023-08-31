#include <iostream>
class Time
{
private:
    int hour;
    int minute;
    int second;

public:
    Time() : hour{0}, minute{0}, second{0} {}
    Time(int h, int m, int s) : hour{h}, minute{m}, second{s} {}
    int getHour() const { return hour; }
    int getMinute() const { return minute; }
    int getSecond() const { return second; }

    void display()
    {
        std::cout << "The time is : Hour: " << hour << " Minute: " << minute << " Second: " << second << std::endl;
    }
};
Time addTime(const Time &time1, const Time &time2)
{
    int totalSeconds1 = time1.getHour() * 3600 + time1.getMinute() * 60 + time1.getSecond();
    int totalSeconds2 = time2.getHour() * 3600 + time2.getMinute() * 60 + time2.getSecond();
    int totalSecondsSum = totalSeconds1 + totalSeconds2;
    int hour = totalSecondsSum / 3600;
    int minute = (totalSecondsSum % 3600) / 60;
    int second = totalSecondsSum % 60;
    return Time(hour, minute, second);
}

int main()
{
    int hour, minute, second;
    std::cout << "Please Enter First Time objects Hour, Minute and Second: ";
    std::cin >> hour >> minute >> second;
    Time time1(hour, minute, second);
    std::cout << "Please Enter Second Time objects Hour, Minute and Second: ";
    std::cin >> hour >> minute >> second;
    Time time2(hour, minute, second);
    Time sum = addTime(time1, time2);
    sum.display();
    return 0;
}
