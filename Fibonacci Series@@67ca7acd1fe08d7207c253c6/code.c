#include <stdio.h>
void fibonacciSeries(int n) {
    if (n <= 0) {
        return;
    }
    if (n == 1) {
        printf("0");
        return;
    }
    int first = 0, second = 1;
    printf("%d %d", first, second);
    for (int i = 2; i < n; i++) {
        int next = first + second;
        printf(" %d", next);
        first = second;
        second = next;
    }
    printf("\n");
}
int main() {
    int n;
    scanf("%d", &n);
    if (n <= 0) {
        printf("Invalid input\n");
        return 0;
    }
    fibonacciSeries(n);
    return 0;
}