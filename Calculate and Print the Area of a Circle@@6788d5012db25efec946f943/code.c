// #include <stdio.h>

// int main() {
//     float radius;
//     const float pi = 3.14;
//     printf("Enter radius: ");
//     scanf("%f", &radius);

//     printf("Area: %.2f\n", pi*radius*radius); 
//     return 0;
// }
#include <stdio.h>
#include <math.h>

int main() {
    float radius;
    const double pi = 3.1416;

    scanf("%f", &radius);
    printf("%.2f\n", round(pi * radius * radius * 100) / 100); // Ensures correct rounding

    return 0;
}
