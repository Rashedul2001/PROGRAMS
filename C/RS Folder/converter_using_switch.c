#include <stdio.h>
int main()
{

	float fahrenheit, celsius;
step:
	printf("1.Fahrenheit to Celsius\t2.Celsius to Fahrenheit\nEnter your choice: ");
	int choice;
	char v;
	scanf(" %d", &choice);
	switch (choice)
	{
	case 1:
	step2:
		printf("Enter Fahrenheit value:");
		scanf(" %f", &fahrenheit);

		celsius = ((fahrenheit - 32.0) * (5.0 / 9.0));
		/*because we are working on float type all number should come with decimal point
		otherwise it will not cosider output numbers after decimal point
		example: 0.5567 will stay as 0.00 */
		printf("The celsius value is %.3f\n\n", celsius);
		printf("Ones More? \ntype Y for Yes and and anything for exit:");
		/*v = getchar();--- I don't know why "getchar();" is not working right now so I'm putting a scanf function in it inspite of being larger than getchar*/
		scanf(" %c", &v);
		if ((v == 'y') || (v == 'Y'))
			goto step2;
		else
			goto end;
		break;
	case 2:

	step3:
		printf("Enter Celsius value:");
		scanf(" %f", &celsius);
		fahrenheit = (celsius * ((float)9 / 5)) + 32.0; 
		// other thing that we can do is puting a (float) with the expression where we need a float output from a int input
		printf("The fahrenheit value is %.3f\n\n", fahrenheit);
		printf("Ones More? \ntype Y for Yes and and N for exit:");
		scanf(" %c", &v);
		if (v == 'y' || v == 'Y')
			goto step3;
		else
			goto end;
		break;
	default:
		printf("Enter right choice\n");
		goto step;
	}
end:
	return 0;
}