/*
MD: Rashedul Hasan
ISTT
Bangladesh

 */
#include <iostream>
#include <vector>
#include <ctime>
#include <chrono>

using namespace std;
using namespace chrono;

#define EStart auto start = std::chrono::high_resolution_clock::now();
#define ETime totalDuration(start)

void totalDuration(high_resolution_clock::time_point start)
{
    auto stop = high_resolution_clock::now();
    auto duration = duration_cast<milliseconds>(stop - start);
    cout << "*** " << duration << " ***" << endl;
}

template <typename T>
void print(T value)
{
    std::cout << "=====================" << '\n';
    ;
    std::cout << value << '\n';
    ;
    std::cout << "=====================" << '\n';
    ;
}

template <typename T>
void display(T &value)
{
    cout << "Start: ";
    for (int i = 0; i < value.size(); i++)
    {
        std::cout << value[i] << " ";
    }
    std::cout << '\n';
    ;
}
