#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    FILE *fileptr;
    char c, input[1024], output[1024];
    int i = 0;
    fileptr = fopen("hello.txt", "w");
    if (fileptr == NULL)
    {
        printf("Error\nExiting.....");
        exit(0);
    }
    printf("Enter what you want to write in file:");
    fgets(input, sizeof(input), stdin);

    for (i = 0; input[i] != '\0'; i++)
    {
        fputc(input[i], fileptr);
    }
    fclose(fileptr);
    fileptr = fopen("hello.txt", "r");
    if (fileptr == NULL)
    {
        printf("Error\nExiting.....");
        exit(0);
    }

    c = fgetc(fileptr);
    for (i = 0; c != EOF; i++)
    {
        output[i] = c;
        c = fgetc(fileptr);
    }
    output[i] = '\0';
    printf("\nOutput: %s", output);
    fclose(fileptr);

    return 0;
}