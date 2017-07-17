#include <stdio.h>
int main()
{
	int km,cm,m;
	printf("Enter the distance betweem two cities in KM : ");
	scanf("%d",&km);
	printf("Distance in cm is %d cm.\n",km*100000);
	printf("Distance in m is %d m.\n",km*1000);
	return 0;
}
