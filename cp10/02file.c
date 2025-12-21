#include <stdio.h>

int main()
{
    FILE *ptr;
    ptr = fopen("jaish2.txt", "r");
    if (ptr == NULL)
    {
        printf("The file does no exist Sorry!!!\n");
    }
    else
    {
        int num;
        fscanf(ptr, "%d", &num);
        printf("The value of num is %d\n", num);
    }
    return 0;
}