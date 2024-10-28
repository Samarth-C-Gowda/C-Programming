#include <stdio.h>

int sum(int k);

int main() {
    int result = sum(10);
    printf("%d\n", result);  // Print the result followed by a newline
    return 0;
}

int sum(int k) {
    int total = 0;  // Initialize total to 0
    for (int i = 1; i <= k; i++) {  // Loop from 1 to k
        total += i;  // Add i to total
    }
    return total;  // Return the total sum
}


