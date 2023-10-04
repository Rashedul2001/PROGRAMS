#include <stdio.h>
#include <stdlib.h>
#include <stdio.h>

int main(void)
{
    FILE *ptr;
    ptr = fopen("INPUT.txt", "r");
    if (ptr == NULL)
    {
        printf("ERROR: Exiting......\n");
        exit(0);
    }
    char data[1024];
    fgets(data, sizeof(data), ptr); // it has a '\n' before the '\0' character
    // data[strcspn(data,"\n")]='\0';//use this to strip the \n character

    fclose(ptr);
    printf("The Copied data is: %s\n", data);
    ptr = fopen("hello.txt", "a");
    if (ptr == NULL)
    {
        printf("ERROR: Exiting......\n");
        exit(0);
    }
    printf("Appending The Data to the file \"hello.txt\"....Success");
    fputs(data, ptr);
    fclose(ptr);
    return 0;
}