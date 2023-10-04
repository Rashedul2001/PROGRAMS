#include <stdio.h>
#define ITEMS 4
int main()
{
	//begins
	int i=1, quantify[5];
	float rate[5],value[5],total_value;
	char code[5][5];
	/*READING_VALUES*/
	while(i <=ITEMS)
	{
		printf("Enter code, quentity, and rate:");
		scanf("%s %d %f",code[i],&quantify[i],&rate[i]);
		i++;
		
		
		}
		/*Printing the table and colum Headings..*/
		printf("\n\n       INVENTORY REPORT       m\n");
		printf("-------------------------------------------\n");
		printf("Code Quantity rate value\n");
	printf("--------------------------------------------\n");
		/*.......Preparation of Inventory Position.....*/
		total_value=0;
		i=1;
		while(i<=ITEMS)
		{
			value[i]= quantify[i] * rate[i];
			printf("%5s %10d %10.2f %e\n",code[i], quantify[i], rate[i], value[i]);
			total_value+=value[i];
			i++;
			
		}
		
		printf("------------------------------------------\n");
		printf("\t\t\tTotal Value= %e\n",total_value);
		
		printf("------------------------------------------");
		//END
		
	return 0;
	
}
