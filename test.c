#include<stdio.h>
void main(){
	int x=10;
	int y= &x;
	int z= *y;
	printf("%d\n%d\n%d",x,y,z);
}
