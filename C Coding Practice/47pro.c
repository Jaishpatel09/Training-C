#include <stdio.h>
#include<windows.h>
int main()
{
    for (int i = 1; i <= 5; i++)
    {
        for (int k = 1; k <= 5 - i; k++)
        {

            printf(" ");
        }
        for (int j = 1; j <= i; j++)
        {

            printf("* ");
        }
        printf("\n");
    }
    Beep(500,300);// To beep when lower pyramid loop starts or first loop end.
    for (int i = 5-1; i >= 1; i--) // To avoid repetition of a line we use total row -1(5-1).
    {
        for (int j = 1; j <= 5 - i; j++)
        {
            printf(" ");
        }
        for (int k = 1; k <= i; k++)
        {
            printf("* ");
        }
        printf("\n");
    }
    
    return 0;
}