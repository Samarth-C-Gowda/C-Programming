#include <stdio.h>
#include <ctype.h>

void main() {
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch); 
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' || ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U') {
        printf("Points scored: 5\n");
   	}
  	  else if(isdigit(ch)) {
        printf("Points scored: 10\n");
        }
        else {
        printf("Points scored: 0\n");
        }
}