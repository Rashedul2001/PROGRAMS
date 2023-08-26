#include <stdio.h>
#include <time.h>
#include <unistd.h> // this is for sleep function.....
#include <conio.h>  // this is for kbhit
// The functionality of kbhit() is that,
// when a key is pressed it returns nonzero value,
// otherwise returns zero.

int main(void)
{
    char in = 0;
    while ((in != 'x') && (in != 'X'))
    {
        do
        {

            time_t var = time(NULL);
            // time_t is special variable type for time with header time.h with ld format specifier
            // time(NULL) funtion returns number of secs since jan 1, 1970 UTC midnight
            printf("%ld\n", var);
            sleep(1); // wait for 1 sec
        } while (!kbhit());
        in = getch(); // doesn't wait to press enter
        // in=getchar(); have to enter the input
    }

    return 0;
}