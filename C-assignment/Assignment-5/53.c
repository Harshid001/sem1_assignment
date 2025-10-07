#include <stdio.h>
int main()
{

    int num = 5, count = 1;
    for (int i = 1; i <= num; i++)
    {
        for (int j = 1; j <= num * 2 - 1; j++)
        {
            if (count < 10)
            {
                printf("  ");
            }
            else
            {
                printf(" ");
            }
            if (i + j <= num)
            {
                printf(" ");
            }

            else if (i + j > num && j - i < num)
            {
                printf("%d", count);
                count++;
            }
        }
        printf("\n");
    }

    return 0;
}