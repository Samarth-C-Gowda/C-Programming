#include<stdio.h>
void main()
{
	float a,b,c,det;
	printf("Enter the three coefficients (in order) :\n");
	scanf("%f%f%f",&a,&b,&c);
	det=(b*b)-(4*a*c);
	if(det==0){
		printf("Roots are equal\n");
		printf("Points = 0");
	}else if(det>0){
		printf("Roots are real\n");
		printf("Points = 20");
	}else if(det<0){
		printf("Roots are imaginary\n");
		printf("Points = 10");
	}
}