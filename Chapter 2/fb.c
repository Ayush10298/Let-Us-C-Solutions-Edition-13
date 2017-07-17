#include <stdio.h>
int main()
{
	char a;
	printf("Enter the character : ");
	scanf("%d",&a);
	if((a>='A')&&(a<='Z'))
	{
		printf("Capital\n");
	}
	else if((a>='a')&&(a<='z'))
	{
		printf("Small\n");
	}
	else if((a>='0')&&(a<='9'))
	{
		printf("Number.\n");
	}
	else
	{
		printf("Special symbol\n");
	}
	return 0;
}
