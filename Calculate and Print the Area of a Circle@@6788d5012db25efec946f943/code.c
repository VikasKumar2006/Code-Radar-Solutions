#include <stdio.h>

#define PI 3.14159

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    float area = PI * radius * radius;
    printf("Area: %.2f\n", area); // Print with 2 decimal places

    return 0;
}