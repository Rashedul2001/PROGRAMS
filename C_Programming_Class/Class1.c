// // number 6 largest element among three numbers

// #include <stdio.h> //include => pre processor directive kaj hocche <> vitore amara jani

// int main()
// { // entry point
// 	int a, b, c;
// 	printf("Enter Three numbers:\n"); // console a output deya
// 	//	printf("%d - %s kichu ekta , %ld double \"%lf\"",'c',"String",9545244223,99.99); // c => etar ascii value //ascii value gula number

// 	scanf("%d%d%d", &a, &b, &c); // kaj input neya
// 	//	if(/*comparison eta true hoi tahol jodi onso ta kaj korbe*/)
// 	//	//ei line kaj korbe
// 	//	{
// 	//		if(ldfd)
// 	//		// joto sob
// 	//		// //
// 	//		//;
// 	//	}
// 	//	else
// 	//	{
// 	//		///;
// 	//	}
// 	//

// 	// compare > , <, ==, !=
// 	int greatest;
// 	if (a > b)
// 		greatest = a;
// 	else
// 		greatest = b;
// 	if (greatest > c)
// 		;
// 	else
// 		greatest = c;

// 	printf("The Largest element is: %d \n", greatest);

// 	return 0;
// }

// 07 Quadratic equation solution

#include <stdio.h>

int main()
{
	int i = 5;
	//	printf("%d %d %d %d %d\n",i++,++i,i,--i,i--);

	double a, b, c;
	printf("Enter value of a, b, c:");
	scanf("%lf%lf%lf", &a, &b, &c); // input space othoba \n enter tahole vable input ses ba cacche int dobule
	double dis = 0;
	dis = (b * b - 4 * a * c); // division -> multiplication -> plus minus %
	printf("%lf\n", dis);

	double root1;
	double root2;
	if (0 <= dis)
	{
		root1 = (-b + sqrt(dis)) / (2 * a);
		root2 = (-b - sqrt(dis)) / (2 * a);
		printf("The Root 1 = %lf\n", root1);
		printf("The Root 2 = %lf\n", root2);
	}
	else
	{
		double some = (-b / (2 * a));
		root1 = root2 = (sqrt(-dis));
		printf("Root1 = %lf + %lfi\n", some, root1);
		printf("Root2 = %lf -%lfi\n", some, root1);
	}

	return 0;
}
