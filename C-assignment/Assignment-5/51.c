#include <stdio.h>
int main(){
    int count = 15;
    int n ;
    scanf("%d",&n);
    for(int i = 1 ; i<= n ; i++){
        for(int j = i ; j>=1 ; j--){
            printf(" %d ",count);
            count = count - 1 ;
            
        }
        printf("\n");
    }


    return 0;
}