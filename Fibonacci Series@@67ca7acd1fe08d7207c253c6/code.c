#include <stdio.h>

void fibonacciSeries(int n) {
    if (n <= 0)  return 0;
    if (n == 1)  return 1;
    return fibonacciSeries(n-1)+fibonacciSeries(n-2);
}

int main() {
    int n;
    scanf("%d", &n);
    for(int i=1;i<n;i++){
        printf("%d",fibonacciSeries(n));
    }

    return 0;
}