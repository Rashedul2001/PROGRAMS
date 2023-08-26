#include <stdio.h>
#include <conio.h>
#include <math.h>
int main()
{
	float a, b, c, discrimination, root1, root2, realpart, imagpart;
	printf("Enter the value of a, b and c, respectively:\n");
	scanf("%f %f %f", &a, &b, &c);
	discrimination = b * b - 4 * a * c;
	if (discrimination > 0)
	{
		root1 = (-b + sqrt(discrimination)) / (2 * a);
		root2 = (-b - sqrt(discrimination)) / (2 * a);
		printf("Root1= %.3f and Root2= %.3f\n", root1, root2);
	}
	else if (discrimination == 0)
	{
		root1 = root2 = -b / (2 * a);
		printf("Root1= %.3f and Root2= %.3f\n", root1, root2);
	}
	else if (discrimination < 0)

	{
		realpart = -b / (2 * a);
		imagpart = sqrt(-discrimination) / (2 * a);
		printf("Root1= %.3f +%.3fi and Root2= %.3f-%.3fi \n", realpart, imagpart, realpart, imagpart);
	}

	getch();
	return 0;
}