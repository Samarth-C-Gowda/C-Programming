#include<stdio.h>

int area1(int a);
int area2(int m, int n);
float area3(int x);

void main(){
	printf("A of S: %d", area1(5));
	printf("A of R: %d", area2(5,6));
	printf("A of S: %f", area3(5.0));
}


int area1(int a){
return a*a;
}

int area2(int m, int n){
return m*n;
}

float area3(int x){
return 3.14*x*x;
}
// C doesnt let you overload