#include <stdio.h>

void main()
{
    char name[10];
    float salary, tax ;
    printf("Enter the name of the employee:\n");
    scanf("%s",&name);
    printf("Enter the salary of the employee:\n");
    scanf("%f",&salary);
    printf("%s\n",name);

    if(salary<=500000)
	tax=0.05*salary;
    
    else if(salary>500000 && salary<1000000)
	tax=0.05*500000 + 0.1*(salary-500000);
   
    else if(salary>1000000 && salary<=2000000)
	tax=0.05*500000 + 0.1*500000 + 0.2*(salary-1000000);
   
    else if(salary>2000000)
	tax=0.05*500000 + 0.1*500000 + 0.2*1000000 + 0.3*(salary-2000000);

    printf("%f",tax);
   
}