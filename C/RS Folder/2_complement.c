#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main() {
    char a[16];
    int i,j,k, len;
    printf("Enter a binary number: ");
    gets(a);
    len = strlen(a);
    for (k=0; a[k]!='\0'; k++) {
        if(a[k]!='0'&&a[k]!='1')
        {
            printf("\n incorrect binary number format....The program will quit.\n");
            getch();
            exit(1);
        }

    }
    for(i=len-1;a[i]!='1';i--) 
    ;
    for(j=i-1;j>=0;j--)
    {
        if(a[j]=='1')
        a[j]='0';
        else
        a[j]='1';


    }

    printf("\n2's compliment =%s",a);
    getch;
    
}