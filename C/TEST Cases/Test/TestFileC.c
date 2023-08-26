
#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    char inputDate[50], *token;
    int day, month, year;
    time_t localTimeNow = time(NULL), userTime;
    struct tm thisTime = *localtime(&localTimeNow);
    struct tm givenTime = {0};
    time_t diffTime = 0;
    printf("Enter the Date of the Match (dd/mm/yyyy):");
    Printf("Do you know the time of the match? (if yes Write in international Format or press N))");
    fgets(inputDate, sizeof(inputDate), stdin);
    sscanf(inputDate, "%d/%d/%d", &day, &month, &year);
    givenTime.tm_year = year - 1900;
    givenTime.tm_mon = month - 1;
    givenTime.tm_mday = day;
    userTime = mktime(&givenTime);
    diffTime = (time_t)difftime(userTime, localTimeNow);
    struct tm dueDate;
    printf("%ld", diffTime);
    dueDate = *localtime(&diffTime);
    // printf("%s", ctime(&diffTime));
    printf("\n%d", dueDate.tm_mday);

    return 0;
}
