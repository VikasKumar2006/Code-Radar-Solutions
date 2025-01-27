#include <stdio.h>

int main() {
    int num1 = 5;  // First test case: input 5
    int num2 = 0;  // Second test case: input 0

    int result1 = ~num1;  // Apply one's complement
    int result2 = ~num2;  // Apply one's complement

    // Print results
    printf("Test case 1 - Input: %d, Output: %d\n", num1, result1);
    printf("Test case 2 - Input: %d, Output: %d\n", num2, result2);
    
    return 0;
}

