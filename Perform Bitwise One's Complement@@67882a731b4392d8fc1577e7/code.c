#include <stdio.h>

int main() {
    int num1 = 5;  // First test case: input 5
    int num2 = 0;  // Second test case: input 0

    int result1 = ~num1;  // Apply one's complement
    int result2 = ~num2;  // Apply one's complement

    // Print results
    printf("%d,%d\n", num1, result1);
    printf("%d,%d\n", num2, result2);
    
    return 0;
}

