#include <stdio.h> 

int main() {
int n = 5;
for(int i=1 ; i <=n  ; i++){
     for(int j = 1 ; j<=n-i ; j++){
         printf(" ");
     }
    for(int k = 1 ; k<=2*(n-i)+1 ; k++){
        printf("%d",k);}
    // if(i==j || i+j <= 2*n+1){
    //     printf("*");
    // }
    // else if(i!=1 && j<=3 )
    // {
    //     printf(" ");
    // }
    
    
    //  }
    
    
    
    printf("\n");
}
    return 0;
}