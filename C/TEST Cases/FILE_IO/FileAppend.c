/*This program mearge a to another file*/

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *file1, *file2;
    char name1[20], name2[20];
    printf("Enter Filename to open for reading: ");
    scanf("%s", name1);
    file1 = fopen(name1, "r");
    if (file1 == NULL)
    {
        printf("%s file does not exist\n...exiting.....", name1);
        exit(0);
    }

    printf("Enter File Name to append the contents:");
    scanf("%s", name2);
    file2 = fopen(name2, "a");
    if (file2 == NULL)
    {
        printf("%s file does not exist\n...exiting.....", name2);
        exit(0);
    }
    char c;

    c = fgetc(file1);
    while (c != EOF)
    {
        fputc(c, file2);
        c = fgetc(file1);
    }

    printf("\n Content in file %s was Appended in %s Successfully..", name1, name2);
    fclose(file1);
    fclose(file2);
    return 0;
}
