#define ACCURACY 0.0001
#include <stdio.h>

/* it evaluate the result of e^x: when 0<x<1
that is e^x= 1+x+x^2/2!+x^3/3!+....+x^n/n!
in programe:::Tn=Tn-1*(x/n)*/
int main()
{
	int n,count;
	float x,term,sum;
	printf("Enter value of x:");
	scanf("%f",&x);
	n=term=sum=count=1;
	while(n<=100)
	{
		term=term*x/n;
		sum=sum+term;
		count=count+1;
		if(term<ACCURACY)
		n=999;
		else
		n=n+1;
		
	}
	printf("Terms=%d Sum=%f \n",count,sum);
	return 0;
}
