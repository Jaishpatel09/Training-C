#include <stdio.h>
typedef struct C
{
    int real;
    int imaginary;
}Complex;

int main()
{
   Complex v = {5, 9};
    printf("The value of vector is %d + i%d", v.real, v.imaginary);
    return 0;
}