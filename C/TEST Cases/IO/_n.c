

#include <stdio.h>

int main()
{
    int c;
    printf("geeks for %ngeeks ", &c); // not working
    printf("%d", c);
    getchar();
    return 0;
}
// The above program prints “geeks for geeks 10”.
// The first printf() prints “geeks for geeks”.
//  The second printf() prints 10 as there are 10 characters
//   printed (the 10 characters are “geeks for “) before %n in first printf()
//   and c is set to 10 by first printf().
