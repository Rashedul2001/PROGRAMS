#include<stdio.h>
int main()
{   
    int n,i,sepres,totalmark;
    float percentage;
    printf("Enter the number of subjects:");
    scanf("%d",&n);
    printf("Enter the mark of each subjects out of 100:\n");
    for(i=0; i<n; i++)
    {
        scanf("%d",&sepres);
        totalmark=totalmark+sepres;

    }
        printf("Total mark of %d subjects is %d\n", n, totalmark);
        percentage =(float)totalmark/n;
        printf("your average percentage is %.2f%%.\n",percentage);
        printf("you got GPA ");
        if(percentage>=80&&percentage<=100)
        printf("5.00");
        else if(percentage>=70&&percentage<80)
        printf("4.00");
        else if(percentage>=60&&percentage<70)
        printf("3.50");
         else if(percentage>=50&&percentage<60)
        printf("3.00");
         else if(percentage>=40&&percentage<50)
        printf("2.00");
         else if(percentage>=33&&percentage<40)
        printf("1.00");
        else
        printf("0.00............fail");
}