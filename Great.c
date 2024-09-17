#include <stdio.h>

void main() {
    int a,b,c;
    printf("Enter three distinct numbers: ");
    scanf("%d%d%d", &a,&b,&c);
    if (a>b && a>c) 
	{
        printf("The number %d is greatest.\n",a);
    	} else if (b>a && b>c) 
		{
       		 printf("The number %d is greatest.\n", b);
  	        } else
		 {
        	   printf("The number %d is greatest.\n", c);
   		 }
}   
