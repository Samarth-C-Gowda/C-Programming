#include <stdio.h>
int fib(int x);
int main()
{
    int n, result;
    printf("Enter the number\n");
    scanf("%d",&n);
	result = fib(n-2);
    printf("The fibonacci of %d is %d",n,result);
   return 0;
}

int fib(int x){
	int i, a=0, b=1, c=0;
	for(i=0;i<=n-1;i++){
		c=a+b;
		a=b;
		b=c;
	}
	return i;
}	
