// print reverse table by user input
#include <stdio.h>
int main()
{
    int n;
    printf("Enter the value of n:");
    scanf("%d", &n);
    for (int i = 10; i >= 1; i--)
    {
        printf("%dX%d=%d\n", n, i, i * n);
    }
    return 0;
}