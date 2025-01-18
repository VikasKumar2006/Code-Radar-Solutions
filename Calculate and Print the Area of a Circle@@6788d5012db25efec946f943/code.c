#include <stdio.h>

int main() {
    float radius;
    printf("enter radius:");
    scanf("%f", &radius);

    float area;
    area = 3.14*radius*radius;
    printf("Area: %f\n", area);
    return 0;
}