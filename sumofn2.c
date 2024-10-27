#include<stdio.h>
int fn(int a);
int x;
void main(){
	int sum, result;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	result=fn(x);
	printf("the sum of the series is :  %d",result);
}

int fn(int a){
	int sum=0, i;	
	for(i=0;i<=a;i++){
		sum= sum + i ;
	}
	return sum;
}