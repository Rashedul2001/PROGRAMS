#include <iostream>
#include <iomanip>
#include <ctime>

void printCalendar(int day, int month, int year) {
    // Set the date
    struct tm date = {0};
    date.tm_year = year - 1900;
    date.tm_mon = month - 1;
    date.tm_mday = day;

    // Normalize the date
    std::mktime(&date);

    // Get the day of the week for the first day of the month
    int firstDayOfWeek = date.tm_wday;

    // Get the number of days in the month
    int daysInMonth;
    switch (month) {
        case 4: case 6: case 9: case 11:
            daysInMonth = 30;
            break;
        case 2:
            daysInMonth = ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) ? 29 : 28;
            break;
        default:
            daysInMonth = 31;
    }

    // Print the calendar header
    std::cout << "|---------------------------|\n";
    std::cout << "|Sun|Mon|Tue|Wed|Thu|Fri|Sat|\n";
    std::cout << "|---------------------------|\n";

    // Print leading spaces
    int currentDay = 1;
    for (int week = 0; currentDay <= daysInMonth; ++week) {
        for (int weekday = 0; weekday < 7; ++weekday) {
            if (week == 0 && weekday < firstDayOfWeek) {
                std::cout << "| - ";
            } else if (currentDay <= daysInMonth) {
                std::cout << "|" << std::setw(3) << currentDay;
                currentDay++;
            } else {
                std::cout << "| - ";
            }
        }
        std::cout << "|\n";
        std::cout << "|---------------------------|\n";
    }
}

int main() {
    int day, month, year;

    // Get the first date from the user
    std::cout << "Enter the first date (dd/mm/yyyy): ";
    std::cin >> day;
    std::cin.ignore(); // Ignore the '/'
    std::cin >> month;
    std::cin.ignore(); // Ignore the '/'
    std::cin >> year;

    // Print the calendar for the first date
    std::cout << "\nCalendar for the first date:\n";
    printCalendar(day, month, year);

    // Get the second date from the user
    std::cout << "\nEnter the second date (dd/mm/yyyy): ";
    std::cin >> day;
    std::cin.ignore(); // Ignore the '/'
    std::cin >> month;
    std::cin.ignore(); // Ignore the '/'
    std::cin >> year;

    // Print the calendar for the second date
    std::cout << "\nCalendar for the second date:\n";
    printCalendar(day, month, year);

    return 0;
}
