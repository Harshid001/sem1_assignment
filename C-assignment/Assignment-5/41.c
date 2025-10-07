    // Online C compiler to run C program online
    #include <stdio.h>
    
    int main() {
     int n = 5 ;
      for ( int i = 1 ; i<=n ; i++){
          for (int j = n ; j>= 1; j-- ){
              if (i+j<=n){
              printf("_");}
          }
          printf("\n");
      }
       for(int k = 1 ; k>=n ; k++){
           for(int l = n ; l<=n-k ; l--){
               if((k+l)>=n){
               printf("*");}
           }
           printf("\n");
       }
    
        
    
        return 0;
    }