#include <stdio.h>
#define PI 3.14

int main() {
    float radius;
    printf("enter radius:");
    scanf("%f", &radius);

    float area;
    area = PI*radius*radius;
    printf("Area: %f\n", area);

    return 0;
}