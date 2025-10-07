#include <stdio.h>

int main() {
     int count =1;

     int row;

    scanf("%d", &row);

    for (int i = 1; i <= row; i++) {

        for (int j = 1; j <= i; j++) {
            printf("%d",count);
            count++;
        }




        printf("\n");
    }


    return 0;
}