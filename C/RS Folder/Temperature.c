
/*fdiwerfyhhf*/ // documentation section

#include <stdio.h> // link section
#define F_LOW 0	   // definition section
#define F_MAX 250  // definition section
#define STEP 25	   // definition section

/* int false 56; */ // global declaration section

int main() // main section
{
	typedef float REAL;  
	REAL fahrenheit, celsius;
	fahrenheit = F_LOW;
	printf("Fahrenheit Celsius\n\n");
	while (fahrenheit <= F_MAX)

	{
		celsius = (fahrenheit - 32.0) / 1.8;
		printf("%5.1f %7.2f\n", fahrenheit, celsius);
		fahrenheit = fahrenheit + STEP;
	}
	getchar();

	return 0;
}
