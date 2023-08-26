/*
    Author: MD Rashedul Hasan
    Student of ISTT Dept: CSE


 */

/* write a random password generator with compatibility of writing every password and
the use or website name and a serial number in a txt file. */

#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <string.h>

typedef long long int ll;

// if scanf() return 0 then you have to cover all stdin buffer
int step = 0;

void message(void)
{

    printf("****************************************************************\n");
    printf("*\t \tThis is a password generator.           \t*\n");
    printf("****************************************************************\n");
}

int getlength(void)
{
    int passlength = -1;
    // char buf; // it is totally ignorable
    printf("\nEnter the length of the password:");
    scanf("%d", &passlength);
    if (passlength < 0) // if(scanf("%d", &passlength)!=1||passlength< 0)
    {
        printf("Please enter a valid length of the password.(0 to exit)");
        while (getchar() != '\n') //(buf=getchar() != '\n')
            ;
        return getlength();
    }
    else if (passlength == 0)
        exit(0);
    else
        return passlength;
}
int main(void)
{

    message();
    int passlength = getlength();
    char smallLetter[] = "abcdefghijklmnopqrstuvwxyz";
    char capitalLetter[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    char symbol[] = "!@#$%^&*+=-_,.</?>;:";

    return 0;
}