/*It's only check for n to terminat so remember it
*********
Here we will see the kbhit functionality in C.
The kbhit is basically the Keyboard Hit.
This function is present at conio.h header file.
So for using this, we have to include this header file into our code.

The functionality of kbhit() is that,
when a key is pressed it returns nonzero value,
otherwise returns zero.
*/
#include <stdio.h>
#include <conio.h> // include the library header

int main(void) // correct signature for main
{
    int c = 0;       // note getch() returns `int` type
    while (c != 'n') // until correct key is pressed
    {
        do
        { // forever
            printf("Hello\n");
            // int check = scanf("%d", &check);
        } while (!kbhit()); // until a key press detected
        c = getch();        // fetch that key press
    }
    return 0;
}