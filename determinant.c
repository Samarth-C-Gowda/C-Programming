#include<stdio.h>
#include<math.h>
void main()
{
	float a=0.0f,b=0.0f,c=0.0f,det=0.0f;
        printf("Enter the coefficients");
        scanf("%f%f%f",&a,&b,&c);
        det=sqrt(b*b-4*a*c);
        printf("Determinant is %f",det);
	
	if(det>0)
	{
		printf("Determinant is %f",det);
	}
	else{
		printf("Determinant is not real);
	}
}  