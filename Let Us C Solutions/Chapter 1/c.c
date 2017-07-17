#include <stdio.h>
int main()
{
	int sub1,sub2,sub3,sub4,sub5;
	printf("Enter the marks in subjects ");
	scanf("%d %d %d %d %d ",&sub1,&sub2,&sub3,&sub4,&sub5);
	int sum;
	sum=sub1+sub2+sub3+sub4+sub5;
	printf("Agregate is %f.\n",((float)sum)/5);
	return 0;
}
