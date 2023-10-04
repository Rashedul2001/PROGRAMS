#define MAXLOAN 50000
#include <stdio.h>
int main()
{
	long int loan1,loan2,loan3,sancloan, sum23;
	printf("Enter the value of previous two loans:\n");
	scanf("%ld %ld",&loan1,&loan2);
	printf("\nEnter the value of new loan:");
	scanf("%ld",&loan3);
	sum23=loan3+loan2;
	sancloan=(loan1>0)?0:((sum23>MAXLOAN)?(MAXLOAN-loan2):loan3);
	printf("\n\n Previous loan pending:\n%ld %ld\n",loan1,loan2);
	printf("Loan Requested=%ld\nLoan sanctioned=%ld\n",loan3,sancloan);
	
	return 0;
}
