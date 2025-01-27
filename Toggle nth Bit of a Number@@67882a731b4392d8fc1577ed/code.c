#include <stdio.h>

int main() {
    int num, n;
    scanf("%d %d", &num,&n);
    num ^= (1 << n); // Toggle the nth bit
    printf("%d\n", num);

    return 0;
}