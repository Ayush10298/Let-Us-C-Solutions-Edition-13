#include <stdio.h>
int main()
{
	int h,a,r,g;
	printf("Select the health type for the client :\n1 - Excellent\n2 - Poor\n\nEnter the choice here : ");
	scanf("%d",&h);
	printf("\nEnter the age of the client : ");
	scanf("%d",&a);
	printf("\n\nIs client the residence of the same city :\n1 - Yes\n2 - No\n\nEnter your choice here : ");
	scanf("%d",&r);
	printf("\nWhat is the gender of the client :\n1 - Male\n2 - Female\nEnter your choice here : ");
	scanf("%d",&g);
	if((h==1)&&((a>=25)&&(a<=35))&&(r==1)&&(g==1))
	{
		printf("You are eligible to get a loan.\nYou can be get a premium of Rs4/Rs1000 and\nyour policy amount cannot exceed Rs 2 Lakhs.\n");
	}
	else if((h==1)&&((a>=25)&&(a<=35))&&(r==1)&&(g==2))
	{
		printf("You are eligible to get a loan.\nYou can be get a premium of Rs3/Rs1000 and\nyour policy amount cannot exceed Rs 1 Lakh.\n");
	}
	else if((h==2)&&((a>=25)&&(a<=35))&&(r==2)&&(g==1))
	{
		printf("You are eligible to get a loan.\nYou can be get a premium of Rs6/Rs1000 and\nyour policy amount cannot exceed Rs 10,000.\n");
	}
	else
	{
		printf("You do not fulfill the criteria for sanctioning a load.\n");
	}
	return 0;
}
