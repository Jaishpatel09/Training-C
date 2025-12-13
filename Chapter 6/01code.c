#include <stdio.h>
int main()
{
    int i = 78;
    int k = 89;
    int *j = &i; // j is a pointer pointing  i (J is an integer pointer)
    // j is a pointer which is store the value of i

    printf("The address of %p\n", &i);
    printf("The address of %p\n", j);
    printf("The address of %p\n", &k);

    printf("The value at address j is %d\n", *j);
    return 0;
}