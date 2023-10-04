// example of pointer>>>>
#include <stdio.h>

int main(void)
{
    char name[] = "Rashedul";
    char *point;
    point = name;
    printf("%c\n", point[1]);     // this is the value of pointer pointing name[1]
    printf("%u\n", point);        // this is the address of the pointer pointing name[1]
    printf("%c\n", *(point + 1)); // this is the value of pointer pointing name[1]
    printf("%u\n", point + 1);    // this is the address of the pointer pointing name[1]
                                  // we can do point++ but can't do name++
    return 0;
}