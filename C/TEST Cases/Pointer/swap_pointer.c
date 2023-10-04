#include <stdio.h>
#include <conio.h>

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main(void)
{
	int a, b;
	printf("Enter two numbers: ");
	scanf("%d %d", &a, &b);
	printf("Ther numbers before swap are: a=%d b=%d\n", a, b);
	swap(&a, &b);
	printf("Ther numbers after swap are: a=%d b=%d", a, b);

	getch();
	return 0;
}