#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num, &n);
    // Retrieve the nth bit using bitwise AND
    int bit_value = 1 & (num >> n);
    // Output the value of the nth bit
    printf("%d\n", bit_value);
    return 0;
}
