#include <stdio.h>

int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            if (i == 0)
            {
                printf(" *");
            }else{
                printf(" *");
                for (int s = 1; s <=2*(i-5); s++)
                {
                    printf(" ");
                    printf(" *");
                }
                printf("\n");
                
                
            }
            
            
        }
        printf("\n");
    }

    return 0;
}