// In C, return type of getchar(), fgetc() and getc() is int (not char).
// So it is recommended to assign the returned values of these functions to an integer type variable.

#include <stdio.h>
int main(void)
{

    int in;
    while ((in = getchar()) != EOF) // not working
    {
        putchar(in);
    }

    // char ch;  /* May cause problems */
    // while ((ch = getchar()) != EOF)
    // {
    //    putchar(ch);
    // }
}
