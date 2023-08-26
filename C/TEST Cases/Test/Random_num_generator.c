#include <stdio.h>
#include <conio.h>
#include <time.h>
#include <stdlib.h>

int main(void)
{
    int ran;

    srand(time(0)); // for using rand() function we need to use srand() function
    // and time() function is for geting a new starting value or someting every time
    for (int i = 0; i < 10; i++)
    {
        ran = rand();
        printf("%d\n", ran);
        printf("%d\n", ran / 1000);
    }
}