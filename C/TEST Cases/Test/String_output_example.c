#include <stdio.h>
#include <conio.h>
int main()
{
    char str[] = "Rashedul BD";
    printf("--------------------------------\n");
    printf("%15s .............%%15s\n", str);
    printf("%5s ..............%%5s\n", str);
    printf("%15.5s ............%%15.5s\n", str);    // niche 15 tai jaiga kintu 5 bolate matro 5 ta string value print hoiche
    printf("%-15.6s ------------%% -15.6s\n", str); // now its taking 15 space but 6 character for minus it is now left-align
    printf("%-15.0s ------------%% -15.0s\n", str); // now for 0 after point it not taking any character to print
    printf("%.3s ------------%%.3s\n", str);        // now it only taking neccessary space to print 3 character
    printf(" ________________________");

    /* asole ja bojha gelo je . er ager songkha bojhai kotokhani space output a dekhabe print korar jonne
    r . er por ja thake tate bojhai koita character othoba songkha print korbe jotoi thakuk na keno etar opor output bojha jai
    tobe kintu . er ager sonkhar jonne jaiga kintu boraddo korai thakche
    aar - thakar fole sob left align hocche */
    getch();
    return 0;
}