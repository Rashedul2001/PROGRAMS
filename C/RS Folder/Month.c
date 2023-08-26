#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
{
    char month[12][20] = {"January", "February", "March", "April", "May", "june", "july", "August", "September", "October", "November", "December"};
    int i;
    printf("Enter the month value:");
    scanf("%d", &i);
    if (i < 1 || i > 12)
    {
        printf("Incorrect value!!\n Press any key to terminate the program...");
        getch();
        exit(0);
    }

    if (i != 12)
        printf(" %s followed by %s", month[i - 1], month[i]); //funny thing is this that if input i =7 then month i-1 will be 7th value and month[i] will be 8th value... ha ha ha
    else
        printf("%s followed by %s", month[i - 1], month[0]);
    return 0;
}
