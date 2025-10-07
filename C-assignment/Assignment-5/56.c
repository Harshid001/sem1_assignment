#include <stdio.h>
int main()
{

    int num = 5, count = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = num-i; j >= 1; j--)
        {
            if (count < 10)
            {
                printf("  ");
            }
            else
            {
                printf(" ");
            }
        printf(" ");
           
        }
        for (int k = ( i*2-1); k >=1; k--)
        {
            if (count < 10)
            {
                printf("  ");
            }
            else
            {
                printf(" ");
            }
            printf("%d",count);
            count++;
        }
        
        printf("\n");
    }

    return 0;
}