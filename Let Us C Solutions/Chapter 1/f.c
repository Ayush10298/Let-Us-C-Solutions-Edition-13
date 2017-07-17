#include <stdio.h>
int main()
{
	int c,d;
	printf("Enter the value of c and d\n");	
	scanf("%d%d",&c,&d);
	c=c+d;
	d=c-d;
	c=c-d;
	printf("c : %d , d : %d.\n",c,d);
	return 0;
}
