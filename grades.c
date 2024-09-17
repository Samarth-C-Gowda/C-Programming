#include <stdio.h>

void main() {
    int s1,s2,s3,s4,s5;
    float avg;
    printf("Enter the marks of 5 subjects: Phy, Chem, Bio, Maths, C.S :- \n");
    scanf("%d%d%d%d%d", &s1,&s2,&s3,&s4,&s5);
    avg=(s1+s2+s3+s4+s5)/5.00;  
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
