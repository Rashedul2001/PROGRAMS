/*
MD: Rashedul Hasan
ISTT
Bangladesh
 */

//! Please don't Enter wrong input
// **I didn't write this program to handle wrong input
// Todo: It will be ready for that soon
// *@param: Enjoy

#include <stdio.h>
#include <string.h>
#include <time.h>
#include <stdlib.h>
int main()
{
    char userInputBuffer[100];
    int day, month, year, hour, min, dueDays;
    char timeStatus[10], temp[100], *token;

    time_t localTimeSec = time(NULL), userTimeSec, diffTimeSec;
    struct tm localTimeDate = *localtime(&localTimeSec);
    struct tm userTimeDate = {0}, diffTimeDate;
    printf("Warning!\n");
    printf("Please don't Enter wrong input\nI didn't write this program to handle wrong input\n");
    printf("It will be ready for that soon...Enjoy\n");

    printf("\n****************************************\n");
    printf("Enter the Date and the Time of the match:\n");
    printf("Date==>Example: 23/11/2050\n");
    printf("Time==>Example: 06.20 PM\n");
    printf("\nFirst Enter Date:");
    fgets(userInputBuffer, sizeof(userInputBuffer), stdin);
    sscanf(userInputBuffer, "%d/%d/%d", &day, &month, &year);
    printf("Now Enter Time:");
    fgets(userInputBuffer, sizeof(userInputBuffer), stdin);

    token = strtok(userInputBuffer, ".");
    hour = atoi(token);
    token = strtok(NULL, " ");
    min = atoi(token);
    token = strtok(NULL, "\n");
    strcpy(timeStatus, token);

    userTimeDate.tm_mday = day;
    userTimeDate.tm_mon = month - 1;
    userTimeDate.tm_year = year - 1900;
    userTimeDate.tm_hour = strcmp(timeStatus, "PM") ? hour : (hour + 12);
    userTimeDate.tm_min = min;

    userTimeSec = mktime(&userTimeDate);
    diffTimeSec = (time_t)difftime(userTimeSec, localTimeSec);
    dueDays = (diffTimeSec / (60 * 60 * 24));
    diffTimeDate = *localtime(&diffTimeSec);

    printf("\nThe Match will start on: %s", ctime(&userTimeSec));
    printf("%d Days left for the Match to start.\n", dueDays);
    printf("************************************\n*  Wishing you an exciting match!");
    printf("  *\n************************************\n\n\n");
    return 0;
}
