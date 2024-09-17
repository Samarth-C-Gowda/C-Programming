#include <stdio.h>

void main() {
    float x, y;
    printf("Enter the x-coordinate: ");
    scanf("%f", &x);
    
    printf("Enter the y-coordinate: ");
    scanf("%f", &y);

   
    if (x > 0 && y > 0) {
        printf("The point (%f, %f) is in Quadrant I.\n", x, y);			/* +,+ = 1quad */
    } else if (x < 0 && y > 0) {
        printf("The point (%f, %f) is in Quadrant II.\n", x, y);                /* -,+ = 2quad */
    } else if (x < 0 && y < 0) {
        printf("The point (%f, %f) is in Quadrant III.\n", x, y);               /* -,- = 3quad */
    } else if (x > 0 && y < 0) {
        printf("The point (%f, %f) is in Quadrant IV.\n", x, y);                /* +,- = 4quad */
    } else if (x == 0 && y != 0) {
        printf("The point (%f, %f) is on the Y-axis.\n", x, y);                 /* 0,y = y-axis */
    } else if (x != 0 && y == 0) {
        printf("The point (%f, %f) is on the X-axis.\n", x, y);                 /* x,0 = x-axis */
    } else {
        printf("The point (%f, %f) is at the origin.\n", x, y);                 /* 0,0 = origin */
    }

  
}