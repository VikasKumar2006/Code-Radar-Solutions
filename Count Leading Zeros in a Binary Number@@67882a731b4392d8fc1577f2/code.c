#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    printf("%d\n", __builtin_clz(n)); // Counts leading zeros
    return 0;
}
