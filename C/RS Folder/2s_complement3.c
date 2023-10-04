#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define TRUE 1
#define FALSE 0
int main()
{
    /* remember there is also a continue statement to use
    but never ever use goto statement never.............. */
    system("cls");
    do
    {
        int i, n, carry = 1;
        printf("\n\nEnter the number of bits you want to enter:(exit<=0)\n");
        scanf(" %d", &n);
        if (n <= 0)
            break;
        char binary[n + 1], onecmp[n + 1], twocmp[n + 1];
        printf("Enter the binary number: ");
        scanf("%s", binary);
        for (i = 0; i < n; i++)
        {
            if (binary[i] == '1')
                onecmp[i] = '0';
            else if (binary[i] == '0')
                onecmp[i] = '1';
            else
            {
                printf("Error!! in converting.....\n");
                break;
            }
        }
        onecmp[i] = '\0';
        if (strlen(onecmp) != n)
            continue;

        printf("\nOne's complement: ");
        puts(onecmp);
        for (i = n - 1; i >= 0; i--)
        {
            if ((onecmp[i] == '1') && carry == 1)
                twocmp[i] = '0';
            else if (onecmp[i] == '0' && carry == 1)
            {
                twocmp[i] = '1';
                carry = 0;
            }
            else
                twocmp[i] = onecmp[i];
        }
        twocmp[n] = '\0';
        printf("The Twos complement of binary is: %s ", twocmp);

    } while (TRUE);
    printf("Thank You.");
    return 0;
}