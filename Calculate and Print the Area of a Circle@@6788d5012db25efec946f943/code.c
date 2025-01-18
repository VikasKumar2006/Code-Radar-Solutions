#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    float radius;
    printf("enter radius:");
    scanf("%f",radius);

    printf("Area: %f",3.14*radius*radius);
    return 0;
}