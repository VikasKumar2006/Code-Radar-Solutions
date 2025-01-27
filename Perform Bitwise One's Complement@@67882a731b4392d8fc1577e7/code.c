#include <stdio.h>

int main() {
    int num = 5;  // Binary representation: 0000 0101
    int result = ~num;  // Apply bitwise one's complement
    printf("%d\n", num);
    printf("%d\n", result);
    return 0;
}
