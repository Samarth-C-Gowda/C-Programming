#include <stdio.h>
int fib(int x);
int main()
{
    int n, result;
    printf("Enter the number\n");
    scanf("%d",&n);
	result = fib(n-1);
    printf("The fibonacci of %d is %d",n,result);
   return 0;
}

int fib(int x){
	int sum=0, sumtotal=0, a=0, b=1, c=0;
	if(x==1){
		return 0;
	}else if(x==2){
	        return 1;
	}else if(x>2){
		sum=(fib(x-1)+fib(x-2));
		sumtotal = sumtotal+sum;
	}
	return sumtotal;
}	
// still a logical error. 
