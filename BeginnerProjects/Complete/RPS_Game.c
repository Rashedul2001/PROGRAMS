// ready to be upgraded

#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>

void line(int);
int getscore(char, char);
char comRand(void);

int main(void)
{
    char user, comp, buf[10000];
    int score;
    srand(time(NULL));

    line(10);
    printf("\nThis is code for Playing Rock Paper Scissors Game..\nPlay and have fun");
    line(10);
    printf("\nEnter 'R' for Rock, 'P' for Paper and 'S' for scissors and 'X' to exit>>>>>>>>\n");
    line(10);
    while (1)
    {
        do
        {
            comp = comRand();
            printf("Enter your choice:");
            fgets(buf, sizeof(buf), stdin);
            user = toupper(buf[0]);
            if (user == 'X')
            {
                exit(0);
            }
        } while (!(user == 'S' || user == 'P' || user == 'R'));
        printf("Computer choose: '%c'", comp);
        score = getscore(user, comp);
        if (score == 0)
        {
            line(4);
            printf("\nThe match is Draw...\n");
            line(4);
        }
        else if (score == 1)
        {
            line(4);
            printf("\nYou Won the Game...\n");
            line(4);
        }
        else if (score == -1)
        {
            line(4);
            printf("\nYou Lost...\n");
            line(4);
        }
        else
            printf("Something Went Worng:");
    }
    return 0;
}

void line(int n)
{
    printf("\n");
    for (int i = 0; i < n; i++)
    {
        printf("-----");
    }
    printf("\n");
}
int getscore(char user, char comp)
{
    if (comp == user)
        return 0;
    else if (comp == 'R' && (user == 'P'))
        return 1;

    else if (comp == 'R' && (user == 'S'))
        return -1;
    else if (comp == 'P' && (user == 'S'))
        return 1;
    else if (comp == 'P' && (user == 'R'))
        return -1;
    else if (comp == 'S' && (user == 'R'))
        return 1;
    else if (comp == 'S' && (user == 'P'))
        return -1;
    else
    {
        exit(1);
    }
}
char comRand(void)
{
    int r = rand() % 100 + 1; // I could get only three output but it will give same result for many times
    // printf("\ncomp=%d\n", r);
    if (r < 33)
        return 'R';
    else if (r > 33 && r <= 68)
        return 'P';
    else
        return 'S';
}
