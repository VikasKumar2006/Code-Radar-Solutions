#include <stdio.h>

int main() {
    int a = 5;  // Binary representation: 0000 0101
    int result = ~a;  // Apply bitwise one's complement
    printf("%d\n", a);
    printf("%d\n", result);
    return 0;
}
