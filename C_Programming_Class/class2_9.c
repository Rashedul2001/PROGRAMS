// number 9.  the first n  fibonacci numbers

#include<stdio.h>

int main()
{

	int num;
	printf("Enter the nuumber: ");
	scanf("%d",&num);
	int a = 0,b = 1,c =a+b;
	if( num ==1)
	{
		printf("Series: 0\n");
		return 0;
	}		
	if ( num ==2){
		printf("Series: 0 1\n");
		return 0;
		}

		printf("Series: 0 1 ");
		for (int n = 3;n<=num;++n){
		printf("%d ",c);
		a=b;
		b=c;
		c=a+b;
		}





return 0;
}
