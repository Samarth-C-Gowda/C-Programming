#include<stdio.h>
void main()
{
	float a,b,answer;
	char ch;

	printf("ENTER OPERATION\n");
	scanf("%c",&ch);

	printf("ENTER 2 NUMBER\n");
	scanf("%f %f",&a,&b);

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
 