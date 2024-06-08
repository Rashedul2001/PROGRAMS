// 8 ... factorial

#include<stdio.h>

int main()
{
	int num;
	printf("Enter a number to find factorial: ");
	scanf("%d",&num);
	long long int ans = 1;
	if(num<2){
	printf("The factorial is: %lld",1);
	}
	else{
		
		for (int i = num;i!=1;i--){
			ans = ans* i;

		}
		}

		printf("The factorial of %d is : %lld\n",num,ans);



	return 0;
}
