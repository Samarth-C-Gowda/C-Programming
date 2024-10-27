 #include <stdio.h>

int main()
{
    int n, remainder[100];
    printf("Enter the number\n");
    scanf("%d",&n);

    for(int i=n; i>0;i--){
	remainder[i]=n%2;
	n=n/2;
	printf("%d",remainder[i]);
	}


   return 0;
}