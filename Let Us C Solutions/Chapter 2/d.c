#include <stdio.h>
int main()
{
	int n;
	printf("Enter a number : ");
	scanf("%d",&n);	
	if(n>=1900)
	{
		switch((n-1900)%7)
		{
			case 0:
			{
				printf("Monday");
				break;
			}
			case 1:
			{
				printf("Tuesday");
				break;
			}
			case 2:
			{
				printf("Wednesday");
				break;
			}
			case 3:
			{
				printf("Thursday");
				break;
			}
			case 4:
			{
				printf("Friday");
				break;
			}
			case 5:
			{
				printf("Saturday");
				break;
			}
			case 6:
			{
				printf("Sunday");
				break;
			}
		}
	}
	return 0;
}
