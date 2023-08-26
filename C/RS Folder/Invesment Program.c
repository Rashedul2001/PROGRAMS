/*Investment Problem we had 5000 taka time 10year and interest was 11%*/
/* Written by Rashedul*/
#include <stdio.h>
#define PERIOUD 10
#define PRINCIPAL 5000
/* Main program starts*/
int main()
{
	int  year;
	float amount,value,in_rate;
	in_rate=0.11;
	amount= PRINCIPAL;
	year=0;
	while(year<=PERIOUD)
	{
		printf("In %d year you will get %10.3f Taka\n",year,amount);
		year=year+1;
		value=amount+ amount*in_rate;
		amount=value;
		
	}
	
	
	
	
	return 0;
}
