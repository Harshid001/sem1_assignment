#include <stdio.h>
int main(){
    int count =2 ;
    int n;
    scanf("%d",&n);
    for(int i=1 ; i <= n ; i++ ){
        for (int j =1 ; j <= i ; j++){
            
                printf("%d ",count);
                count = count+2;
        }
            printf("\n");
        }
    


    return 0;
}