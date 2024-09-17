#include<stdio.h>
#include<math.h>
void main()
{
	float bs,hra,da,gs;
	printf("Enter the basic salary :\n");
	scanf("%f",&bs);
	if(bs<=10000){
		hra=bs*0.2;
		da=bs*0.8;
	
	}else if(bs<=20000){
		hra=bs*0.25;
		da=bs*0.9;

	}else if(bs>20000){
		hra=bs*0.3;
		da=bs*0.95;

	}
	
	gs=bs+hra+da;	
	printf("Gross salary =%.3f",gs);
}