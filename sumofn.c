#include <stdio.h>

int main()
{
    int n;
    printf("Enter the number\n");
    scanf("%d",&n);
    int sum=0;
    int i=1;
    while(i<=n)
    {
	sum=sum+i;
        i++;
    }
    printf("The sum of numbers upto %d is %d",n,sum);
   return 0;
}