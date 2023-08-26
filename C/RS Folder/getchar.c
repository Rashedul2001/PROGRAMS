#include <stdio.h>
#include <conio.h>
int main()
{

	char answer;
	printf("Would you like to know my name?\n Type Y for YES and N for NO:\n");
	answer=getchar();/* rrading a character*/
	if(answer=='y'||answer=='Y')
	printf("\n\nMy name is: MD RASHEDUL HASAN");
	else 
	printf("\n\n You are good for nothing");
	return 0;
}
