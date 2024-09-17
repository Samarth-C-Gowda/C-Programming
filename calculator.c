#include<stdio.h>
void main()
{
	float a,b,answer;
	char ch='';

	printf("ENTER OPERATION");
	scanf("%c",&ch);

	print("ENTER 2 NUMBER");
	scanf("%f%f",&a,&b);

	switch(ch)
	{
		case '+':
		answer=a+b;
		printf("%d",answer);
		break;
		
		case '-':
		answer=a-b;
		printf("%d",answer);
		break;

		case '*':
		answer=a*b;
		printf("%d",answer);
		break;

		case '/':
		answer=a/b;
		printf("%d",answer);
		break;

		default:
		printf("WRONG INPUT");
	}

}
 