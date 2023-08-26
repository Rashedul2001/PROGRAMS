#include <stdio.h>
int main()
{
	char address[80];
	printf("Enter address, only leter\n");
	scanf("%[a-z]",address);
	printf("%80s\n\n",address);
	char n_address[80];
	printf("Enter address\n");
	scanf(" %[^\n]",&n_address);
	printf("%-80s\n\n",n_address);
	
	char l_address[80];
	printf("Enter address, only leter\n");
	scanf("%s",l_address);
	printf("%80s\n\n",l_address);
	int num[11],i;
	printf("input your mobile dite one by one:");
	for (i=1;i<=11;i++)
	{
	scanf("%d",&num[i]);
		}
		printf("your number:");
		for(i=0;i<=11;i++)
		{
			printf("%d",num[i]);
		}
	return 0;
}
