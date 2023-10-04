// tm_sec

// seconds passed since last minute

// tm_min

// minutes passed since hour

// tm_hour

// hours passed since midnight

// tm_mday

// day of the month

// tm_mon

// months passed since January

// tm_year

// year passed since 1900

// tm_wday

// days since Sunday

// tm_yday

// days since first day of the year

// tm_isdst

// Daylight Saving Time Flag

#include <stdio.h>
#include <time.h>

int main(void)
{
    time_t now;
    time(&now); // another way of geting timeSec...

    printf("%ld\n", now);
    struct tm *structlocaltime, *GMTIME;
    structlocaltime = localtime(&now);
    GMTIME = gmtime(&now);
    printf("tm_sec= %d\n", GMTIME->tm_sec);
    printf("tm_min= %d\n", GMTIME->tm_min);
    printf("tm_hour= %d\n", GMTIME->tm_hour);
    printf("tm_mday= %d\n", GMTIME->tm_mday);
    printf("tm_mon= %d\n", GMTIME->tm_mon);   // January is 0 and december 11
    printf("tm_year= %d\n", GMTIME->tm_year); // year since 1900
    printf("tm_wday= %d\n", GMTIME->tm_wday);
    printf("tm_yday= %d\n", GMTIME->tm_yday);
    printf("tm_isdst= %d\n", GMTIME->tm_isdst);

    printf("\nGM Time\n");

    printf("tm_sec= %d\n", structlocaltime->tm_sec);
    printf("tm_min= %d\n", structlocaltime->tm_min);
    printf("tm_hour= %d\n", structlocaltime->tm_hour);
    printf("tm_mday= %d\n", structlocaltime->tm_mday);
    printf("tm_mon= %d\n", structlocaltime->tm_mon + 1);
    printf("tm_year= %d\n", structlocaltime->tm_year + 1900);
    printf("tm_wday= %d\n", structlocaltime->tm_wday);
    printf("tm_yday= %d\n", structlocaltime->tm_yday);
    printf("tm_isdst= %d\n", structlocaltime->tm_isdst);

    return 0;
}