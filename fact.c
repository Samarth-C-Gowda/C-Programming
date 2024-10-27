#include<stdio.h>
int fact(int a);
int x;
void main(){
	int sum, result;
	printf("Enter the value of x\n");
	scanf("%d",&x);
	result=fact(10);
	printf("the sum of the series is :  %d",sum);
}

int fact(int a){
	int sum=0, i;	
	for(i=0;i<=x;i++){
		sum= sum + i ;
	}
	return sum;
}//logical error here