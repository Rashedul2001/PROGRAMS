#include <stdio.h>

int main(void)
{
    float fahrenheit, celcius;
    printf("Enter the Fahrenheit temperature: ");
    scanf("%f", &fahrenheit);
    celcius = ((5.0 / 9.0) * (fahrenheit - 32.0));
    printf("The Celsius temperature is: %.3f\n", celcius);

    return 0;
}