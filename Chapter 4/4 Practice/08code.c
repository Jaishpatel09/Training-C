#include <stdio.h>
int main()
{

    int n;
    int i = 1;
    printf("Enter the value of n:");
    scanf("%d", &n);
    int product = 1;
    while (i <= n)
    {
        product *= i;
        i++;
    }
    printf("The factorial of %d is %d", n, product);
    return 0;
}