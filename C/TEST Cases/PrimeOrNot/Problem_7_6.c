#include<stdio.h>
#include<conio.h>
void main()
{
    int i,j,car;
    int frequency[5][5] = {{0},{0},{0},{0},{0}};
    char city;
    printf("Codes represent the following information.\n");
    printf("M-Madras\t\t\t1-Ambassador\nD-Delhi\t\t\t\t2-Flat\nC-Calcutta\t\t\t3-Dolphin\nB-Bombay\t\t\t4-Maruti\n\n");
    printf("For each person, Enter the city code.\n");
    printf("Followed by the car code.\n");
    printf("Enter the letter X to indicate the end:\n");
    for(i=0; i<=100; i++)
        {
            scanf(" %c",&city);
            if(city =='X')
            break;
            scanf("%d",&car);
            switch(city)
            {
                
            }




        }

}