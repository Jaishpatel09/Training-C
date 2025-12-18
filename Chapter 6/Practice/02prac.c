#include <stdio.h>
int returning_5(int *ptr)
{
    printf("The value of ptr is %u\n", ptr);
    printf("The value at ptr is %d\n", *ptr);
    return 5;
}
int main()
{
    int i = 10;
    int *ptr = &i;
    printf("The value of i is %u\n", ptr);
    returning_5(ptr);
    return 0;
}