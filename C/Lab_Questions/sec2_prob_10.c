#include <stdio.h>
int main(void)
{
    int array[] = {2, 55, 663, 20, 9, 33, 84, 71}, *pointer;
    pointer = array;
    printf("The Elements of the array are:");
    for (int i = (sizeof(array) / sizeof(int)) - 1; i >= 0; i--)
    {

        printf("%d ", *(pointer + i));
    }
}