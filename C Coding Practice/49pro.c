#include <stdio.h>

int main()
{
    for (int i = 1; i <= 4; i++)
    {
        // left stars
        for (int j = 1; j <= i; j++)

            printf(" *");
        // middle gap
        for (int k = 1; k <= 2 * (4 - i); k++)

            printf("  ");
        for (int s = 1; s <= i; s++)

            printf(" *");
        // right stars
        printf("\n");
    }
    for (int i = 3; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++) // left stars
        {
            printf(" *");
        }
        for (int k = 1; k <= 2 * (4 - i); k++) // middle space
        {
            printf("  ");
        }
        for (int l = 1; l <= i; l++) // right stars
        {
            printf(" *");
        }
        printf("\n");
    }

    return 0;
}