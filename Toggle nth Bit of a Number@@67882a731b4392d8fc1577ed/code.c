#include <stdio.h>

int main() {
    int num, n;

    printf("Enter number: ");
    scanf("%d", &num);

    printf("Enter bit position (0-based): ");
    scanf("%d", &n);

    num ^= (1 << n); // Toggle the nth bit

    printf("%d\n", num);

    return 0;
}