#include <stdio.h>

int main() {
    float num;

    printf("Enter a floating-point number:");
    scanf("%f",&num);

    printf("You entered: %f.2f\n",num);

    return 0;
}