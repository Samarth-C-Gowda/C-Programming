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
	int i;
	if(x==0){
		i=0;
	}else if(x==1){
	        i=1;
	}else if(x>=2){
		i=(fib(x-1)+fib(x-2));
	}
	return i;
}	
