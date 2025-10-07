#include <stdio.h>

int main() {
int n=5;
for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j <= i ; j++){
        if(i==3 && j == 2 || i==4 && j==2 || i==4 && j==3 ){
        printf(" ");
            
        }
        else{
            printf("*");
        } 
    }
    printf("\n");
}
    return 0;
}