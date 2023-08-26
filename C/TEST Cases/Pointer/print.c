#include <stdio.h>
void print(char *p)
{
    while (*p != '\0')
    {
        printf("%c", *p);
        p++;
    }
}
// void print(char c[])// this acts as an pointer althoug we declare it as a string it also implies for an array
// {
//     int i = 0;
//     while (c[i] != '\0')
//     {
//         printf("%c", *(c + i));
//         c = c + 1;
//     }
// }
int main(void)
{
    char name[] = "Rashedul";
    print(name);

    return 0;
}