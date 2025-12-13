// WAP to find sum of even numbers from 1 to n using while statement
#include <stdio.h>
int main()
{
    int sum = 0, i = 1, n;
    printf("Enter value of n:");
    scanf("%d", &n);
    while (i <= n)
    {
        if (i % 2 == 0)
        {
            sum += i;
        }
        i++;
    }
    printf("The sum of even from 1 to %d is %d", n, sum);
    return 0;
}