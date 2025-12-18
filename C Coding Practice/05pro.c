// To find average of 5 integer numbers
#include <stdio.h>
int main()
{
    int a, b, c, d, e;
    float result;
    //printf("Enter 5 integers :");  // In Short way to find average of 5 intrgers
    //scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    printf("Enter first no:");
    scanf("%d", &a);
    printf("Enter second no:");
    scanf("%d", &b);
    printf("Enter third no:");
    scanf("%d", &c);
    printf("Enter fourth no:");
    scanf("%d", &d);
    printf("Enter fifth no:");
    scanf("%d", &e);
    result = (a + b + c + d + e) / 5;
    printf("The average of 5 numbers is %.2f", result);
    return 0;
}