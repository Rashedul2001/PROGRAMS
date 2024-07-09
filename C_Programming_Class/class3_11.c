// class 3 number 11 reverse digit and get the sum

#include <stdio.h>

int main()
{

	int num; // 1275007
	printf("Enter a Number: ");
	scanf("%d", &num);
	char ans[10000];
	int sum = 0;
	while (num != 0)
	{
		int temp = num % 10; // 7
		sum += temp;
		num /= 10;
		printf("%d", temp);
	}
	printf("\nThe sum is : %d ", sum);

	return 0;
}
