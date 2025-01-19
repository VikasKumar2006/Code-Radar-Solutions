#include <stdio.h>

int main() {
    float radius;

    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area: %f\n", 3.14*pow(radius,2)); 

    return 0;
}