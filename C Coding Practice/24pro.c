#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number:");
    scanf("%d", &n);
    if (n<0)
    {
        printf("Negative");
    }else
    {
        printf("Positive");
    }
    
    
    return 0;
}