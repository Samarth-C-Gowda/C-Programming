#include<stdio.h>
#include<math.h>
void main()
{
	float cp,sp,p,l;
	printf("Enter the cost price :\n");
	scanf("%f",&cp);

	printf("Enter the selling price :\n");
	scanf("%f",&sp);

	
	if(sp>cp){
		p=sp-cp;
		printf("The profits are %frupees",p);
	}else if(cp>sp){
		l=cp-sp;
		printf("The losses are %frupees",l);
	}else
		printf("There was neither a rofit nor a loss");

}

