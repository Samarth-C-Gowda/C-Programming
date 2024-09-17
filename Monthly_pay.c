#include<stdio.h>

void main()
{
	float Monthly_pay, hours, rate;
	
	printf("Enter the Hours worked in a week and Rate per hour in order");
	scanf("%f %f",&hours, &rate);
	
	Monthly_pay=hours*rate*4.00;
	
	printf(" The monthly pay is %f",Monthly_pay);

}
	