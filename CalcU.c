#include<stdio.h>

int addition();
int subtraction();
int multiplication();
int division();
	
int x,y,result;

void main(){
	char c;
	printf("Enter the Operation to be used\n");
    	scanf("%c",&c);
	printf("Enter the numbers to be operated on\n");
	scanf("%d %d",&x,&y);
	
	switch(c){
		case '+':
			addition();
			break;
		case '-':
			subtraction();
			break;
		case '*':
		    multiplication();
			break;
		case '/':
			division();
			break;
	} 

}

int addition(){
	result=x+y;
	printf("The sum is %d", result);
	return result;
}

int subtraction(){
	result=x-y;
	printf("The difference is %d", result);
	return result;
}

int multiplication(){
	result=x*y;
	printf("The product is %d",result);
	return result;
}
int division(){
	result=x/y;
	printf("The division is %d",result);
	return result;
}