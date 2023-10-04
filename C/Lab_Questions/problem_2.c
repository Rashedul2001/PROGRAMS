#include <stdio.h>
#define PI 3.141592653589793

int main(void)
{
    float radius, area, circumference;
    printf("Enter the radius of the circle: ");
    scanf("%f", &radius);
    area = PI * radius * radius;
    circumference = 2 * PI * radius;
    printf("The area of circle is : %.3f", area);
    printf("\nThe circumference of the circle is : %.3f", circumference);
    return 0;
}