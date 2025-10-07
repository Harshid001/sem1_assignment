 #include <stdio.h>
int main() {
int n=5;
for(int i = n ; i>=1; i--){
    for(int j = i ; j >= 1 ; j--){
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