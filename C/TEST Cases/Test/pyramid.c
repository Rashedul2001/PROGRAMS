#include <stdio.h>
#include <conio.h>
int main()
{
	int num, i, y, x = 40;

	printf("\nEnter a number for generating the pyramid:");
	scanf("%d", &num);
	for (y = 0; y <= num; y++)
	{
		gotoxy(x, y + 1);
	}
	getch();
	return 0;
}