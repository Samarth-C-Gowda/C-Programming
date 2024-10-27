#include<stdio.h>
#include<math.h>
void main()
{
	float a,b,c,det,r1,r2;
	printf("Enter the three coefficients (in order) :\n");
	scanf("%f%f%f",&a,&b,&c);
	det=(b*b)-(4*a*c);
	if(det==0){
		r1=((-b)+(sqrt(det)))/(2.0*a);
		r2=r1;
		printf("Roots are equal\n");
		printf("Roots = %f,%f \n",r1,r2);

	
	}else if(det>0){
		r1=((-b)+(sqrt(det)))/(2.0*a);
		r2=((-b)-(sqrt(det)))/(2.0*a);
		printf("Roots are real\n");
		printf("Roots = %f,%f \n",r1,r2);


	}else {
		printf("Roots are imaginary\n");
	}
	
}

