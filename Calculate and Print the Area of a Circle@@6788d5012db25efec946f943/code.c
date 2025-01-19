#include <stdio.h>

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area: %f\n", 3.14 * radius * radius); // Print with 2 decimal places

    return 0;
}