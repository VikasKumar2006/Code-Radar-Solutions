#include <stdio.h>

int fibonacciSeries(int n) {
    if (n <= 0)  return 0;
    if (n == 1)  return 1;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}

int main() {
    int k;
    scanf("%d", &k);
    for(int i=0;i<k;i++){
        printf("%d",fibonacciSeries(i));
    }

    return 0;
}