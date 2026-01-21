#include <stdio.h>
int add(int, int);
int add(int a, int b)
{
    return a + b;
}

int main()
{
    int sum;
    sum = add(9, 5);
     
    printf("Sum=%d",sum);
    return 0;
}