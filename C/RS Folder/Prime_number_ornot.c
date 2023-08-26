#include<stdio.h>
int main ()
{
	int num,i,flag=0;
	printf("enter the number:");
	scanf("%d", &num);
	printf("the %d number is ",num);
	for (i = 2; i <= num/2;i++ )
	{
		if (num%i == 0)
		{
			flag = 1;
 			break;
		}
		else
		continue;

	}
	if (flag ==0)
	printf("prime\n");
	else
	printf("not prime\n");

	return 0;
}