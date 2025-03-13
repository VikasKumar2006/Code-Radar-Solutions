#include <stdio.h>
int main() {
    int n, i, j, space;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 0; space < n - i; space++)
            printf(" ");
        for (j = 0; j < (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
    for (i = n - 1; i >= 1; i--) {
        for (space = 0; space < n - i; space++)
            printf(" ");
        for (j = 0; j < (2 * i - 1); j++)
            printf("*");
        printf("\n");
    }
}
