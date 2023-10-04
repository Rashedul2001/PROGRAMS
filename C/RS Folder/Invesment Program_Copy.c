/*investment program with whatever I learnd till now*/



#include <stdio.h>


int main()
{
	int year,time=0;
	float in_rate, interest;
	double amount, F_price;
	char pp;
	
	printf("Enter Your Deposited money: ");
	scanf("%lf",&F_price);
	printf("Enter Your time of year:");
	scanf("%d",&year);
	printf("Enter Bank interest rate in Percentage:");
	scanf("%f%c",&interest,&pp);
	in_rate=interest/100;
	amount=F_price;
	
	
	while(time<=year)
	{
		printf("In %d year you will get:%lf Taka.\n",time,amount);
		
	    printf("In exponential expression taka is :%e Taka.\n\n\n",amount);
		
		amount=amount+amount*in_rate;
		
		
		time=time+1;
		

	}
	
	
	
	
	
	
	
	
	
	
	
	
	return 0;
}
