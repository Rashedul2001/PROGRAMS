#include <stdio.h>
int main()
{
    char name[] = "MD Rashedul Hasan";
    printf("%c\n", *name);
    printf("%c\n", *(name + 3));
    printf("%c\n\n", *(name + 12));

    char *s_name;
    s_name = name;
    printf("%c\n", *s_name);
    printf("%c\n", *(s_name + 3));
    printf("%c\n", *(s_name + 12));

    return 0;
}