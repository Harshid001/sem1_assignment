#include <stdio.h>

int main() {
    int row = 5;
  
    

    for (int i = 1; i <= row; i++) {
    
        for(int k = row-i ; k >= 1 ; k-- ){
            printf("_");
        }
            printf("*");
        
        printf("\n");

    }

    return 0;
}