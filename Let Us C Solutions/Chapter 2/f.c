#include <stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	(a>b && a>c)?printf("A\n"):((b>c)?printf("B\n"):printf("C\n"));
	return 0;
}
