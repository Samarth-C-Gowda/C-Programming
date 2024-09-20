#include <stdio.h>

void main() {
    int age;
    float salary, increase;
 
    printf("Enter the Age: ");
    scanf("%d", &age);

    printf("Enter the Salary: ");
    scanf("%f", &salary);
   
    if (age>=50) 
    {
	if(salary>=60000)
	{
		increase=salary*0.05;
	} 
	else
	{
		increase=salary*0.10;
	}
    }
    else
    {
	increase=salary*0.03;
    } 

	salary=salary+increase;
	printf("The New Salary Is %f",salary);

       
}   