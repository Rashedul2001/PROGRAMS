#include<stdio.h>
void get_answer(int x, int y, int *great, int* small)
{
    if(x>y)
    {
        *great= x;
        *small= y;
    }
    else if(x<y){
        *great= y;
        *small= x;
    }
    else
    {
        printf("\nThey are equall.");
    }

}
int main(void) {
    int a, b, greater, smaller;
    printf("Enter two number to see which is geater and smaller:");
scanf("%d %d", &a, &b);
get_answer(a, b, &greater, &smaller);
if(a!=b){
printf("\n %d is greater than %d",greater, smaller);
}

return 0;
}