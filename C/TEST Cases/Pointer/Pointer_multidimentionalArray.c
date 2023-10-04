#include <stdio.h>

int main(void)
{
    int mldmA[2][3] = {{1, 2, 3}, {4, 5, 6}};
    int(*p)[3] = mldmA;
    printf("%d\n", *(*p + 4));
    int test[5] = {5, 6, 7, 8, 9};
    int *inp = test;
    printf("%d\n", *(inp + 1));

    return 0;
}