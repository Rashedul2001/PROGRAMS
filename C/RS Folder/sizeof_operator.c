/*the sizeof operator is normally used to determine the length of arrays and structures when their sizes are not known to the programmer.*/
#include<stdio.h>
#include<conio.h> 
int main()
{
	int a;
	float b;
	double c;
	char d;
	long e;
	long double f;
	unsigned int g;
	clrscr();
	printf("size of charecter :%d\n\n",sizeof(d));
	
	printf("size of integer: %d\n\n",sizeof(a));
	printf("size of unsign int:%d\n\n",sizeof(g));
	printf("size of Floating point :%d\n\n",sizeof(b));
	printf("size of long :%d\n\n",sizeof(e));
	
	
	printf("size of double :%d\n\n",sizeof(c));
	printf("size of long double :%d\n\n",sizeof(f));
	
	return 0;
}
