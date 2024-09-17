#include<stdio.h>
#include<ctype.h>

void main() 
{
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
 
    if (isalpha(ch))
        printf("\n%c is an alphabet",ch);
 
    else if (isdigit(ch))
        printf("\n%c is a number",ch);
 
    else
        printf("\n%c is a special character",ch);
}