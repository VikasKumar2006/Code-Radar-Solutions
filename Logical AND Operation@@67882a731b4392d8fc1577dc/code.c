// #include <stdio.h>

// int main(){
//     int a,b;
//     sanf("%d %d",&a &b);
//     if(a>0&&b>0){
//         printf("True");
//     }
//     else{
//         printf("False");
//     }
//     return 0;
// }
#include <stdio.h>

int main() {
    int a, b;
    scanf("%d %d", &a, &b);  // Fixed `scanf`

    if (a > 0 && b > 0) {    // Fixed condition
        printf("True");
    } else {
        printf("False");
    }
    
    return 0;
}
