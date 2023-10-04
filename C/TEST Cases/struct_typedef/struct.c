#include <stdio.h>
struct complex
{
    float real;
    float img;
};

int main(void)
{
    struct complex complex;
    complex.real = 3;
    complex.img = 0.5;
    printf("complex numbure is %.2f +%.2f", complex.real, complex.img);

    return 0;
}