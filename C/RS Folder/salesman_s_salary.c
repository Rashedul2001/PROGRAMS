#include <stdio.h>
#define BASE_SALARY 1500.00
#define BONUS_RATE 200.00//per sold
#define COMMISSION 0.02//on total monthly sale
int main()
{
	int quantity;
	float gross_salary, price, bonus, commission;
	printf("INPUT NUMBER of SOLD and PRICE\n");
	scanf("%d %f",&quantity, &price);
	bonus= BONUS_RATE*quantity;
	commission=price*COMMISSION*quantity;
	gross_salary=BASE_SALARY+commission+bonus;
	printf("\n");
	printf("gross salary is= %.2f\n",gross_salary);
	return 0;
}
