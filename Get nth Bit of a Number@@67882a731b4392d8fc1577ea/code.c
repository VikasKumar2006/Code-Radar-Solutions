#include <stdio.h>

int main() {
    int num, n;

    printf("Enter a number: ");
    scanf("%d", &num);

    printf("Enter the bit position (0-based): ");
    scanf("%d", &n);

    printf("The value of the %dth bit is: %d\n", n, (num >> n) & 1);

    return 0;
}