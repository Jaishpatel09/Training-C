#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");

            if (i == 0)
            {
                printf("*");
            }
            else
            {
                printf("*");
                for (int s = 1; s <= 2 * i - 5; s++)
                {
                    printf(" ");
                    printf(" *");
                }
                printf("\n");
            }
        }
    }
// Lower Half
for (int i = 4-1; i>=1 ; i--)
{
    for (int j = 1; j <= 4-i; j++)
    
       printf(" ");
    if(i==0)
    {
        printf("*");
    }
    else
    {
        printf("*");
        for (int s = 1; s <=2*i-3; s++)
        {
            printf(" ");
            printf("*");
            
        }
        
    }
   printf("\n");
   
    
}

    return 0;
}