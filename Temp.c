#include<stdio.h>

void main()
{
	double farenheit,celsius;
	
	printf("Enter the temperature in Frenheit");
	scanf("%lf",farenheit);
	
	celsius=(farenheit-32)*5.00/9.00;
	
	printf(" The temperature in c is %lf",farenheit);

}
	