#include <stdio.h>

int main() {
    int N;
    scanf("%d", &N);

    // Loop to print the pattern
    for (int i = N; i >= 1; i--) {  // Outer loop for rows
        for (int j = 1; j <= i; j++) {  // Inner loop for stars
            printf("* ");
        }
        printf("\n");  // Move to the next line
    }

    return 0;
}
