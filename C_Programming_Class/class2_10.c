//sum of harmonic series like = 1+ 1/2^2+1/3^3.....


#include<stdio.h>

int main()
{
	int n;
	printf("Enter the last number: ");
	scanf("%d",&n);
	double ans = 0;// sum => ans =0 and multiply => ans =1

	for (int i = 1; i <= n; i++){
		double temp =1;
		int j = i;//2 3
		while(j--)
		temp*=i;
		ans += (1/temp);	
		}


		printf("Answer = %lf",ans);




return 0;
}
