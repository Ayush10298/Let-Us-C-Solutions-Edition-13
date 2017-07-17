#include <stdio.h>
int main()
{
	int h,hh,t,tt,cc,g;
	float c;
	hh=tt=cc=0;
	printf("Enter the Hardness of the steel : ");
	scanf("%d",&h);
	hh=(h>50)?1:0;
	printf("Enter the Carbon content of the steel  : ");
	scanf("%f",&c);
	cc=(c<0.7)?1:0;
	printf("Enter the tensile strength of the steel : ");
	scanf("%d",&t);
	tt=(t>5600)?1:0;
	if((hh==1)&&(cc==1)&&(tt==1))
	{
		g=10;
	}
	else if((hh==1)&&(cc==1))
	{
		g=9;
	}
	else if((cc==1)&&(tt==1))
	{
		g=8;
	}
	else if((tt==1)&&(hh==1))
	{
		g=7;
	}
	else if((hh==1)||(cc==1)||(tt==1))
	{
		g=6;
	}
	else
	{
		g=5;
	}
	printf("Your steel of Grade %d.\n",g);
	return 0;
}
