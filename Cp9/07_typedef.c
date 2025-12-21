#include <stdio.h>
#include <string.h>

int main()
{
    typedef int jaish;
    jaish a = 550;
    printf("The value of a is %d\n", a);
    typedef float jaish1;
    jaish1 b = 4.2561;
    printf("The value of b is %.2f\n", b);
    typedef char jaish2[20];
    jaish2 c = "JAISH";
    printf("The value of c is %s\n", c);

    return 0;
}