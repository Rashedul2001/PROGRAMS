// #include <stdio.h>
// typedef long long int lll;

// int main(void)
// {
//     lll num = 1774919639;
//     printf("%lld", num);
//     return 0;
// }

#include <stdio.h>
#include <string.h>

typedef struct company_person_salary
{
    char name[100];
    int code;
    double salary;

} cps;

int main(void)
{
    cps p1, p2;

    strcpy(p1.name, "Rashedul");
    p1.salary = 1000000000000;
    p1.code = 1;
    p2.salary = 10000;
    p2.code = 2;
    strcpy(p2.name, "harry");
    printf("my name is %s and I earn %.0lf $ per mounth", p1.name, p1.salary);

    return 0;
}