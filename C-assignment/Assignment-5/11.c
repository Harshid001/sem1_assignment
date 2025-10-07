#include <stdio.h>

int main() {

     int row;

    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {

        for (int j = 1; j <= row; j++) {
            if (i+j<=row){
                printf(" ");
            }
            else{
                printf("%d",j);
            }
            
        }

        printf("\n");
    }

    return 0;
}