#include<stdio.h>
void main()
{
	int year;
	printf("Enter the year :\n");
	scanf("%d",&year);
	
/* for a leap year the year must be divisible by 4 and 400 but not 100 */

	if((year%4==0 && year%100!= 0) || (year%400==0)){
		printf("The year is a leap year");		
	}else 
		printf("The year is not a leap year");	
}

