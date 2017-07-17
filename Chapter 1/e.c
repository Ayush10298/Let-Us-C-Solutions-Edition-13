#include <stdio.h>
int main()
{
	int l,b,r;
	printf("Enter the length of the rectangle  : ");
	scanf("%d",&l);
	printf("Enter the breadth of the rectangle : ");
	scanf("%d",&b);
	printf("Area : %d and the Perimeter : %d.\n",l*b,2*(l+b));
	printf("Enter the radius of the circle : ");
	scanf("%d",&r);
	printf("Circumference : %f and Area : %f.\n",((float)r)*(22.0/7.0)*2,((float)r)*((float)r)*(22.0/7.0));
	return 0;
}
