#include <stdio.h>
#include <conio.h>

int main(void)
{
    int i = 32;
    int *j = &i;
    printf("anddres 8 is:  %u\n", j);
    printf("anddres 8 is:  %p\n", j);

    getch();
    return 0;
}