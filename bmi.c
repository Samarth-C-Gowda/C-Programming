#include<stdio.h>
void main()
{
	float w,h,bmi;
	printf("Enter the weight of the person :\n");
	scanf("%f",&w);
	
	printf("Enter the heigth of the person :\n");
	scanf("%f",&h);
	
	bmi=(w)/(h*h);
	printf("BMI = %f\n",bmi);
	
	if(bmi<18.5){
		printf("The person is under weight\n");		
	}else if(bmi>=18.5 && bmi<25){
		printf("The person is normal weight\n");
	}else if(bmi>=25){
		printf("The person is over weight\n");		
	}
}

