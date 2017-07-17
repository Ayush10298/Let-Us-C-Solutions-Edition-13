#include <stdio.h>
int main()
{
	int sal;
	float gs;
	printf("Enter the basic salary : ");
	scanf("%d",&sal);
	gs=(float)sal+((float)sal*0.4)+((float)sal*0.2);
	printf("The Gross salary is %0.2f",gs);
	return 0;
}
