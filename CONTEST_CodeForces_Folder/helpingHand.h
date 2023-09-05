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
template <typename T, size_t N>
void printArray(T (&arr)[N])
{
    std::cout << "Start" << std::endl;
    for (size_t i = 0; i < N; i++)
    {
        std::cout << arr[i] << " ";
    }
    std::cout << "End" << std::endl;
}

template <typename t, size_t row, size_t col>
void print2DArray(t (&arr)[row][col])
{
    std::cout << "Start" << std::endl;
    for (size_t i = 0; i < row; i++)
    {
        for (size_t j = 0; j < col; j++)
        {
            std::cout << arr[i][j] << " ";
        }
        std::cout << std::endl;
    }
    std::cout << "End" << std::endl;
}
