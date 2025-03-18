#include <stdio.h>

void fibonacciSeries(int n) {
    // Handle the special cases
    if (n <= 0) {
        return; // No terms to display
    }
    if (n == 1) {
        printf("0");
        return;
    }
    
    // Initialize the first two Fibonacci numbers
    int first = 0, second = 1;
    
    // Print the first two numbers
    printf("%d %d", first, second);
    
    // Generate and print the rest of the Fibonacci series
    for (int i = 2; i < n; i++) {
        int next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    printf("\n"); // New line at the end
}

int main() {
    int n;

    // Read the number of terms
    scanf("%d", &n);

    // Validate input
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }

    // Call the fibonacciSeries function
    fibonacciSeries(n);

    return 0;
}