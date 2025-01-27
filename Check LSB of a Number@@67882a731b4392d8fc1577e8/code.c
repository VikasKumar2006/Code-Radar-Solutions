#include <stdio.h>

int main() {
    int num;
    scanf("%d", &num);
    // Check the LSB using bitwise AND with 1
    if (num & 1) {
        printf("set\n");  // LSB is 1
    } else {
        printf("not set\n");  // LSB is 0
    }
    return 0;
}
