// #include <stdio.h>

// int clearNthBit(int num, int pos) {
//     return num & ~(1 << pos);
// }

// int main() {
//     int num, pos;
//     scanf("%d %d", &num, &pos);
//     printf("%d\n", clearNthBit(num, pos));
//     return 0;
// }

#include <stdio.h>

int main() {
    int num, pos;
    scanf("%d %d", &num, &pos);
    printf("%d\n", num & ~(1 << pos));
    return 0;
}
