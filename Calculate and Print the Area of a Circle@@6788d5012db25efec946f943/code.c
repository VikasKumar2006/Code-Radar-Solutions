#include <stdio.h>

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = 3.14 * radius * radius;
    printf("Area: %.2f\n", area); // Print with 2 decimal places

    return 0;
}