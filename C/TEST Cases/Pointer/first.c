// General syntax
// datatype *var_name;

// An example pointer "ptr" that holds
// address of an integer variable or holds
// address of a memory whose value(s) can
// be accessed as integer values through "ptr"

#include <stdio.h>
int main(void)
{
    int x = 10;
    printf("%p\n", &x);
    int *pointer1 = &x;
    *pointer1 = 20;
    printf("%d\n", x);
    int **pointer2 = &pointer1;
    **pointer2 = 30;
    printf("%d\n", x);
}