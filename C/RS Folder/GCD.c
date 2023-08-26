#include <stdio.h>
#include <conio.h>
#include <math.h>
int GCD(int num2, int num1);
int main()
{
	int num1,num2;
	printf("Enter two numbers whose GCD is to be found:");
	scanf("%d %d",&num1,&num2);
	printf("\nGCD od %d and %d is %d\n",num1,num2,GCD(num1,num2));
	
}

	int GCD(int num1, int num2)
	{
	if (num2>num1)
	return GCD(num2,num1);
	if(num2==0)
	return num1;
	else
	return GCD(num2,num1%num2);
	}
	
