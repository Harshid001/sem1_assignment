#include <stdio.h>
int main(){
    int count =1 ;
    int n;
    scanf("%d",&n);
    for(int i=1 ; i <= n ; i++ ){
        for (int j =1 ; j <= n ; j++){
            
                printf(" %c ",count+64);
                count = count+1;
        }
            printf("\n");
        }
    


    return 0;
}