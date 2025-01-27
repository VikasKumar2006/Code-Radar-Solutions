#include <stdio.h>

int main() {
    int a;
    scanf("%d", &a);
    // Check the MSB by checking if the number is non-zero
    if (a & (1<<31)){
        printf("Set\n");  // MSB is 1 for non-zero numbers
    } 
    else {
        printf("Not Set\n");  // MSB is 0 for zero
    }    
    return 0;
}
