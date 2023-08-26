// /** A working clock of time and date
//    that using your own computer's
//    local time to run the clock
//    without setting the time and date
//    in the code itself.               **/

// //C libraries statement
// #include <stdio.h>
// #include <stdlib.h>
// #include <time.h>

// //Programming the delay command
// void delay(int secondsNumber)
// {
// 	int milliSecondsNumber = 1000 * secondsNumber;
// 	clock_t startTime = clock();
// 	while(clock() < startTime + milliSecondsNumber);
// }

// //Driver program
// int main(void)
// {
// 	//Declaring the variable
// 	char buff[100];

// 	//Making the clock run forever
// 	for(; ;)
// 	{
// 		//Seting the clock over your computer local time
// 		time_t now = time(0);
// 		strftime(buff, 100, " %H:%M.%S \n %d/%m/%Y", localtime(&now));

// 		//Cleaning the command line and printing the clock
// 		system("cls");
// 		printf("\n %s\n", buff);

// 		//Seting a delay of one second between each print
// 		delay(1);
// 	}
// }

/// The code itself without the details:

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int numOfSec)
{
    int numOfMilliSec = 1000 * numOfSec;
    clock_t startTime = clock();
    while (clock() < startTime + numOfMilliSec)
        ;
}

int main(void)
{
    char buff[100];

    for (;;)
    {
        time_t now = time(0);
        strftime(buff, 100, " %H:%M.%S \n %d/%m/%Y", localtime(&now));

        system("cls");
        printf("\n %s\n", buff);

        delay(1);
    }
}