#include <stdio.h>
#include <conio.h>
#include <ctype.h>
int main()
{
	char character;
	printf("press any key:");
	character=getchar();
	if(isalpha(character)>0)/*test for letter*/
	printf("The character is a Letter.");
	else if(isdigit(character)>0)/*test for digit*/
	printf("The character is a digit.");
	else
	printf("the character is not a alphanumeric.");
	
	return 0;
}
