#include <stdio.h>
#include <time.h>
#include <unistd.h>

int main()
{
    // to store the execution time of code
    double time_spent = 0.0;

    clock_t begin = clock();

    // do some stuff here
    for (int i = 0; i < 1000000000; i++)
    {
    }

    clock_t end = clock();

    // calculate elapsed time by finding difference (end - begin) and
    // dividing the difference by CLOCKS_PER_SEC to convert to seconds
    time_spent += (double)(end - begin) / CLOCKS_PER_SEC;

    printf("The elapsed time is %f seconds", time_spent);

    return 0;
}