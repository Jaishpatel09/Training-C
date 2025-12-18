#include <stdio.h>
int main()
{
    int n = 3;
    for (int i = 0; i < n; i++)
    {
                                           
        for (int j = 0; j < 2 * i + 1; j++)
        {
            printf("*");
        }
        // This printf prints a new line 
        printf("\n");
        
    }
    return 0;
}