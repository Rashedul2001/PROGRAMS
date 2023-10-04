#include <stdio.h>
int main()
{
	char c='A';
	char name[20]="MD RASHEDUL HASAN"; 
	printf("OUTPUT OF CHARACTERS\n\n");
	printf("%c\n%3c\n%5c\n",c,c,c );
	printf("%3c\n%c\n\n",c,c);
	printf("OUTPUT of STRING\n\n");
	printf("%s\n",name);
	printf("%20s ....20\n",name);
	printf("%20.10s....20.10\n",name);
	printf("%-20.10s.....-20.10\n",name);
	printf("%.5s...... .5\n",name);
	printf("%5s......5\n",name);
	printf("%05s ......05\n",name);
	return 0;
}
