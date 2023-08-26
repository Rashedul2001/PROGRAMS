// A C program to determine whether a year is leap year or not
#include <stdio.h>
#include <conio.h>
int main()
{
	int n ;
	
	printf("Enter a Year:");
	scanf("%d",&n);
	if(n%400==0)
		printf("Year %d is a leap Year",n);
	else
		//use of logical operator
	{
		if((n%100!=0)&&(n%4==0))
			printf("Year %d is a leap Year",n);
		else
			printf("Year %d is not leap year",n);
		
		}
	
	return 0;
}
