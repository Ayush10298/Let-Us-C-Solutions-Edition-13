#include <stdio.h>
int main()
{
	int a,b;
	printf("Enter the length of the rectangle : ");
	scanf("%d",&a);
	printf("Enter the breadth of the rectangle : ");
	scanf("%d",&b);
	a*b>2*(a+b)?printf("Area is greater\n"):printf("Perimeter is greater\n");
	return 0;
}
