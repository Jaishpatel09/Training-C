#include <stdio.h>
float average(int a, int b, int c);
float average(int a, int b, int c)
{
    return (a + b + c) / 3.0;
}
int main()
{
    int a, b, c;
    printf("Enter First Num a: ");
    scanf("%d", &a);
    printf("Enter First Num b: ");
    scanf("%d", &b);
    printf("Enter First Num c: ");
    scanf("%d", &c);
    printf("The average of a,b and c is %f", average(a, b, c));
}
