#include <stdio.h>
int main()
{
	int c,s;
	printf("Cost Price : ");
	scanf("%d",&c);
	printf("Selling Price : ");
	scanf("%d",&s);
	if(c>s)
	{
		printf("Loss of Rs %d",c-s);
	}
	else
	{
		printf("Profit of Rs %d",s-c);
	}
	return 0;
}
