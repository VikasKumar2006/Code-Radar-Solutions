#include<stdio.h>
int main(){
    int i,j,N,space;
    scanf("%d",&N);
    for(i = 1;i<=N;i++){
        for(space = 1;space<=N-i;space++){
            printf(" ");
        }
        for(j = 1;j<=i;j++){
            printf("*");
        }
        printf("\n");
    }
}