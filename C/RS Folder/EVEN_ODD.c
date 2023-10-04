#include <stdio.h>
int main()
{
	int n;
	printf("Enter -1 to terminate\n\n");
	do {
	printf("Enter a number:");
	scanf("%d",&n);
	if(n==-1)
	continue;
	else
	//use of conditional operator?:
	(n%2==0)?printf("The number is even.\n"):printf("The number is odd.\n");
	}
	while (n!=-1);
	return 0;
}

