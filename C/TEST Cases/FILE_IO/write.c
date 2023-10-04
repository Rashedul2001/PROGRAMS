#include <stdio.h>

int main(void)
{
    FILE *write;
    char nm[100];
    printf("Enter your Name: ");
    gets(nm);
    write = fopen("Name.txt", "w");
    fprintf(write, "%s", nm);
    printf("\nSuccessfully written Name....");
    fclose(write);

    return 0;
}