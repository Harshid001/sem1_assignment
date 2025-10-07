#include <stdio.h>
int main() {
int n=5;
for(int i =n ; i >= 1 ;i--){
    for(int j =n-i  ; j >= 1 ; j--){
    printf("_");

    }
    for(int k =1  ; k <= i ; k++){
    printf("%c",k+64);

    }
    printf("\n");
}
    return 0;
}
