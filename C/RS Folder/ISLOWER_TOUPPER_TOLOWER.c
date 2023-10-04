#include <stdio.h>
#include <ctype.h>// new header file
int main()
{
	char alphabet;
	printf("Enter an alphabet");
	putchar('\n');
	alphabet=getchar();
	if(islower(alphabet))
	{putchar('\t');
	putchar(toupper(alphabet));//Reverce and display
}

	else
	{
	putchar('\t');
	putchar(tolower(alphabet));//Reverce and display
	}
	return 0;
}
