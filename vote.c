#include <stdio.h>

void main() {
    int age;
    printf("Enter The age of the person (in years): ");
    scanf("%d", &age);
    if (age>17) 
        printf("The person is eligible for voting.\n", age);
    else  
        printf("The person is not eligible for voting.\n", age);
  	        
}