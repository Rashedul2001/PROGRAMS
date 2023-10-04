#include <stdio.h>
#include <string.h>

int main(void)
{

    char string1[100] = " MD: Rashedul Hasan", string2[100] = ", Computer Science and Engineering", string3[100];
    printf("Performing strlen()==>The length is: %d\n", strlen(string1));
    strcpy(string3, string1);
    printf("Performing strcpy() and printing copied string: %s\n", string3);
    printf("Performing strcmp() and printing the return value: %d\n", strcmp(string3, string1));
    strcat(string1, string2);
    printf("Performing strcat() and printing concatenated string : %s\n", string1);
    printf("Performing strrev() and printing the reversed string : %s\n", strrev(string3));

    return 0;
}