#include <stdio.h>

void main() {
    int s1,s2,s3,s4,s5,s6;
    float avg;
    printf("Enter the marks of 6 subjects : ");
    scanf("%d%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5,&s6);
    avg=(s1+s2+s3+s4+s5+s6)/6.00;  
    if (avg > 80.00) {
        printf("Grade: A\n");
    } else if (avg> 60.00) {
        printf("Grade: B\n");
    } else if (avg > 40.00) {
        printf("Grade: C\n");
    } else {
        printf("Grade: F\n");
    }

}   
