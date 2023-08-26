#include <stdio.h>
#include <string.h>
int main(int argc, char const *argv[])
{
    char name[20];
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin);
//     Note: The gets() function can also be to take input from the user. However, it is removed from the C standard.

// It's because gets() allows you to input any length of characters. Hence, there might be a buffer overflow.
    for (int i = 0; name[i] != '\0'; i++)
        putchar(name[i]);

    return 0;
}
