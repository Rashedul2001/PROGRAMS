#include <stdio.h>
int main()
{
    int number, power,result=1;
    printf("Enter the number:");
    scanf("%d",&number);
    printf("Enter the exponent:");
    scanf("%d",&power);
    printf("%d^%d=",number,power);
    while(power!=0)
    {
        result=result*number;
        power--;

    }
    printf("%d\n",result);
    return 0;


}
//another example of doing power is 

// #include <math.h>
// #include <stdio.h>

// int main() {
//     double base, exp, result;
//     printf("Enter a base number: ");
//     scanf("%lf", &base);
//     printf("Enter an exponent: ");
//     scanf("%lf", &exp);

//     // calculates the power
//     result = pow(base, exp);

//     printf("%.1lf^%.1lf = %.2lf", base, exp, result);
//     return 0;
// }
