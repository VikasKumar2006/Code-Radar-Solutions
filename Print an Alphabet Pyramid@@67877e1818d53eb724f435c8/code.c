#include <stdio.h>

int main() {
    int n, i, j, space;
    char ch;
    scanf("%d", &n);
    for (i = 1; i <= n; i++) {
        for (space = 1; space <= n - i; space++)
            printf(" ");
        ch = 'A';
        for (j = 1; j <= i; j++)
            printf("%c ", ch++);
        printf("\n");
    }
}
