#include <stdio.h>
void main() 
{
    float amount;
    printf("Enter the amount spent: ");
    scanf(" %f", &amount); 
 
    if(amount<=1000)
        printf("\nThe discount given is 5%");
 
    else if(amount>1000 && amount<5000)
        printf("\nThe discount given is 10%");
 
    else if(amount>5000 && amount<10000)
        printf("\nThe discount given is 20%");
    else
        printf("\nThere is no discount offer");

}