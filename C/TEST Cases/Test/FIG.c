
/*Program Using Math Function*/

#include <stdio.h>
#include <math.h>
#define pi 3.1416
int main()
{
	int range=180,angle;
	float x,y;
	angle=0;
	printf(" Angle           Cos(angle)\n\n" );
	
	while(angle<=range)
	{
		
		x=(pi/range)*angle;
		
		
		y=cos(x);
		
		printf(" %d           %15.4f\n",angle,y);
		
		
		angle=angle+10;
		
	}
	
	return 0;
}
