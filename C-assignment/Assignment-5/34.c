#include <stdio.h>
int main() {
int n=5;
for(int i =1 ; i <= n ;i++){
    for(int j = 1 ; j <= i-1 ; j++){
        printf(" ");
    }
    for(int k =i ; k >= 1 ; k--){
        printf("*");
    }
    printf("\n");
}
    return 0;
}