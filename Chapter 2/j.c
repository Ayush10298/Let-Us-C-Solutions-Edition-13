#include <stdio.h>
int main()
{
	int x1,x2,x3;
	int y1,y2,y3;
	printf("Enter the value of x1");
	scanf("%d",&x1);
	printf("Enter the value of y1");
	scanf("%d",&y1);
	printf("Enter the value of x2");
	scanf("%d",&x2);
	printf("Enter the value of y2");
	scanf("%d",&y2);
	printf("Enter the value of x3");
	scanf("%d",&x3);
	printf("Enter the value of y3");
	scanf("%d",&y3);
	((float)(y2-y1)/(float)(x2-x1))==((float)(y3-y2)/(float)(x3-x2))?printf("YES\n"):printf("No\n");
	return 0;
}
