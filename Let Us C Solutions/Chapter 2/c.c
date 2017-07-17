#include <stdio.h>
int main()
{
	int n;
	printf("year : ");
	scanf("%d",&n);
	(n%4==0)?printf("LEap year\n"):printf("Not\n");
	return 0;
}
