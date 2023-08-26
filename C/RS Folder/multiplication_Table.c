#include <stdio.h>
#define COLMAX 10
#define ROWMAX 15
int main()
{
	int row, colum, y;
	row=1;
	printf("					MULTIPLICATION TABLE					\n");
	printf("-------------------------------------------------------------\n");
	do{
		printf("|\t\t");
		colum=1;
	do
	{
		y=row*colum;
		printf("%4d",y);
		 colum++;
	}while(colum<=COLMAX);
	row=row+1;
	printf("\t\t\t|\n");
	}
	while(row<=ROWMAX);
	printf("-------------------------------------------------------------\n");
	return 0;
}
