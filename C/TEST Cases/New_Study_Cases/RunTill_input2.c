#include <stdio.h>
#include <conio.h>
int main(void)
{
    char ch;
    printf("Enter keys (ESC to exit)\n");
    while (1)
    { // define infinite loop for taking keys
        if (kbhit)
        {
            // printf("Enter keys (ESC to exit)\n");
            ch = getch();      // Get typed character into ch
            if ((int)ch == 27) // when esc button is pressed, then it will comeout from loop
                break;
            printf("You have entered : %c\n", ch);
            // int sum = ch + 40;
            // printf("\n%d\n", sum);
        }
    }
    return 0;
}
