#include <stdio.h>
int sum(int, int);// Function prototype
int sum(int x, int y)// Function definition 
{
    printf("The sum of :%d\n", x + y);
    return x + y;
}
int main()
{
    int a = 10;
    int b = 25;
    sum(a, b);// Function call 
    
    int a1 = 498;
    int b1 = 258;
    sum(a1, b1);// Function call 

    int g = 2485;
    int e = 2822;
    sum(g, e);// Function call 
    
    return 0;
}