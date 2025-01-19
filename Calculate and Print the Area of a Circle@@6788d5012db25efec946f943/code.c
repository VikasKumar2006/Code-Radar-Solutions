#include <stdio.h>

int main() {
    float radius;
    float pi = 3.14;
    printf("Enter radius: ");
    scanf("%f", &radius);

    printf("Area: %.2f\n", pi*radius*radius); 
    return 0;
}