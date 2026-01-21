// By user input
#include <stdio.h>
int add(int, int);
int add(int a, int b)
{
    return a + b;
}
int main()
{
    int x, y, sum;
    printf("Enter two numbers:");
    scanf("%d %d",&x,&y);
    sum = add(x, y);
    printf("Sum=%d", sum);
    return 0;
}