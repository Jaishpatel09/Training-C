#include <stdio.h>
int main()
{
    int i = 2;
    int *pntr = &i;                           // int pointer pntr have the value of i
    printf("The address of i is %u\n", &i);   // %u is printing the value of i
    printf("The value  of i is %d\n", *pntr); //*pntr prints the value of is which is initilized by i
    return 0;
}