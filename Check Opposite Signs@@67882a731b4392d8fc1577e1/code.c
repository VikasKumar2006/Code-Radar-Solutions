#include<stdio.h>
 int main(){
    int a,b;
    scanf("%d %d",&a,&b);
    //if(a>=0 && b<=0){ #wrong
    if((a*b)<0){
        printf("True");
    }
    else{
        printf("False");
    }
    return 0;
 }
//The bitwise XOR (^) operation compares the sign bits of a and b. If their signs are different, the result will have the sign bit set (i.e., negative).
//This method is more efficient and avoids multiplication.