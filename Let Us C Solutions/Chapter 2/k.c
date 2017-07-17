#include <stdio.h>
#include <math.h>
#include <stdlib.h>
int main()
{
	int x,y,r;
	int xx,yy;
	printf("Enter the x coordinate of the center : ");
	scanf("%d",&x);
	printf("Enter the y coordinate of the center : ");
	scanf("%d",&y);
	printf("Enter the value of the radius of the circle : ");
	scanf("%d",&r);
	printf("Enter the x coordinate of the point : ");
	scanf("%d",&xx);
	printf("Enter the y coordinate of the point : ");
	scanf("%d",&yy);
	if((pow(xx-x,2)+pow(yy-y,2))==pow(r,2))
	{
		printf("The point is on the circle.\n");
	}
	else if((pow(xx-x,2)+pow(yy-y,2))>pow(r,2))
	{
		printf("The point is outside the circle.\n");
	}
	else
	{
		printf("The point is inside the circle.\n");
	}
	return 0;
}
