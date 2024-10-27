 #include <stdio.h>
int fact(int x);
int main()
{
    int n, result;
    printf("Enter the number\n");
    scanf("%d",&n);
	result = fact(n);
    printf("The factorial of %d is %d",n,result);
   return 0;
}

int fact(int x){
	int factorial=1;
	
	if(x==0 || x==1){
		factorial=1;
	}else if(x>=2){
		factorial=x*fact(x-1);
	}
	return factorial;
}	
