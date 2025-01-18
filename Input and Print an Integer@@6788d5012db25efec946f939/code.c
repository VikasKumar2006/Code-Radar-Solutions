#include <stdio.h>

char* welcome() {
    return "Welcome to Code Radar!";
}

int main() {
    int num;
    printf("enter integer:");
    scanf("%d",&num);

    printf("You entered: %d",num);
}