/* A C program to evaluate simple expression of the following form  using switch statement
value operator value 			 */

#include <stdio.h>
#include <conio.h>

// It can just perform + - * / till now
//  I will upgrade it some

int main()
{

	double v1, v2;
	char op, cc;
	do
	{
		printf("Type your expression or press E to exit\n");
		scanf("%lf%c%lf", &v1, &op, &v2);
		switch (op)
		{
		case '+':
			printf("ans is= %.3lf\n", v1 + v2);
			break;
		case '-':

			printf("ans is=%.3lf\n", v1 - v2);
			break;
		case '/':
			if (v2 == 0)
				printf("Division by zero\n");
			else
				printf("ans is=%.3lf\n", v1 / v2);
			break;
		case '*':

			printf("ans is=%.3lf\n", v1 * v2);
			break;

		default:
			printf("UNKNOWN OPARETION\n");
			break;
		}
		printf("More calculations ????\n");
		printf("Press Y for yes and anything else to exit program ");
		scanf(" %c", &cc);

	} while (cc == 'y');
	return 0;
}
