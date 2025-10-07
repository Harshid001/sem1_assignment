// Online C compiler to run C program online
#include <stdio.h>

int main() {
int n=5;
for(int i = 1 ; i<=n ; i++){
    for(int j = 1 ; j <= n ; j++){
        if(j==1 || j==n ){
            printf("*");
        }
        else if(i==1 && j>=1 || i==5 && j>=1){
            printf("*");
        }
        else 
        {
        printf(" ");
        }
        
    }
    printf("\n");
}
    return 0;
}