#include<stdio.h>
#include<math.h>
void main(){
	double sum, x, n, i;
	printf("Enter the value of x\n");
	scanf("%lf",&x);

	printf("Enter the value of power\n");
	scanf("%lf",&n);
	
	sum=1;
	
	for(i=n;i>0;i--){
	sum=sum + pow(-1,n)*pow(x,n) ;
	n--;
	printf("%.3lf\t",sum);
	}
	printf("the sum of the series is :  %.3lf",sum);
}