#include <stdio.h>
int main()
{
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);
    int prime = 0;
    for (int i = 2; i < n; i++)
    {
        if (n % i == 0)
        {
            prime = 1;
            break;
        }
    }
    if (prime)
    {
        printf("The number is not prime \n");
    }
    else
    {
        printf("The number is  prime\n");
    }
    return 0;
}