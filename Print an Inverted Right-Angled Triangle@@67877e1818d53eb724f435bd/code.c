#include <stdio.h>

int main() {
    int N, i, j;

    // Taking input for number of rows
    printf("Enter the number of rows: ");
    scanf("%d", &N);

    // Loop to print the inverted triangle
    for (i = N; i >= 1; i--) {  // Outer loop for rows (starting from N to 1)
        for (j = 1; j <= i; j++) {  // Inner loop for columns
            printf("* ");
        }
        printf("\n"); // Move to next line after each row
    }

    return 0;
}
