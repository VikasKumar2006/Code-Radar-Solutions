#include <stdio.h>

int main() {
    int n;
    scanf("%d", &n);
    for (unsigned mask = 1 << 30; mask > 0; mask >>= 1)
        if (n & mask) { printf("%d", (n & mask) ? 1 : 0); n %= mask; }
    printf("\n");
    return 0;
}

