#include <stdio.h>
int main()
{	float f,c;
	printf("Enter the temperature in Farenheit : ");
	scanf("%f",&f);
	c=(f-32.0)*(5.0/9.0);
	printf("Temperature in celsius is : %f.\n",c);
	return 0;
}
