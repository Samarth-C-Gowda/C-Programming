#include <stdio.h>

void main() {
    int number;
    printf("Enter an integer: ");
    scanf("%d", &number);
    if (number>0) 
	{
        printf("The number %d is positive.\n", number);
	if (number%2==0) 
	{
        	printf("The number %d is even.\n", number);
    	} 
  	else if (number%2==1)
	{
       		 printf("The number %d is odd.\n", number);
	} 

	} 
  
    else if (number<0)
	{
        printf("The number %d is negative.\n", number);
	} 
 
    	else
	{
		printf("The number %d is zero.\n", number);
	}
	
