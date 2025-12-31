#include <stdio.h>

int main()
{
    int a;
    printf("Enter your age:");
    scanf("%d", &a);
    if (a>=18)
    {
        printf("You are adult\n");
        printf("You can vote");
        
    }else
    {
        printf("You are minor\n");
        printf("You can not vote");

    }
    
    
    return 0;
}