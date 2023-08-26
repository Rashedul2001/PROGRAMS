#include <stdio.h>
int main()
{
  int i, num[4], sum = 0;
  printf("Enter four number:\n");
  for (i = 0; i < 4; i++)
  {
    scanf("%d", num + i);
    sum += *(num + i);
  }
  printf("\nSum is %d\n", sum);
}