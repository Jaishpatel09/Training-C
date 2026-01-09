#include <stdio.h>
int main()
{
    int rows = 4;
     // Upper half
    for (int i = 1; i <= rows; i++)
    {
        // leading spaces
        for (int s = 1; s <= rows - i; s++)
            printf(" ");

        if (i == 1)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int space = 1; space <= 2*i - 3; space++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    // Lower half
    for (int i = rows - 1; i >= 1; i--)
    {
        // leading spaces
        for (int s = 1; s <= rows - i; s++)
            printf(" ");

        if (i == 1)
        {
            printf("*");
        }
        else
        {
            printf("*");
            for (int space = 1; space <= 2*i - 3; space++)
                printf(" ");
            printf("*");
        }
        printf("\n");
    }

    return 0;
}
