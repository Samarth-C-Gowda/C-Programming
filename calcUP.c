//With parameters

#include<stdio.h>

int addition(int x, int y);
int subtraction(int x, int y);
int multiplication(int x, int y);
int division(int x, int y);
	

void main(){
	int a,b;
	char c;
	printf("Enter the Operation to be used\n");         //fn declaration
    	scanf("%c",&c);
	printf("Enter the numbers to be operated on\n");
	scanf("%d %d",&a,&b);
	
	switch(c){
		case '+':
			addition(a,b);
			break;
		case '-':
			subtraction(a,b);
			break;
		case '*':
		    multiplication(a,b);
			break;
		case '/':
			division(a,b);
			break;
		default:
			printf("INVALID INPUT");
			break;
	} 

}

int addition(int x, int y){                                  //fn definition   ( parameters )
	int result=x+y;
	printf("The sum is %d", result);
	return result;
}

int subtraction(int x, int y){
	int result=x-y;
	printf("The difference is %d", result);
	return result;
}

int multiplication(int x, int y){
	int result=x*y;
	printf("The product is %d",result);
	return result;
}
int division(int x, int y){
	int result=x/y;
	printf("The division is %d",result);
	return result;
}