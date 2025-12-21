#include <stdio.h>
typedef struct C
{
    int real;
    int imaginary;
} Complex;
void display(Complex c)
{
    printf("The value of vector is %d + i%d\n", c.real, c.imaginary);
}
int main()
{
    Complex array[5];
    for (int i = 0; i < 5; i++)
    {
        printf("Enter the real number:");
        scanf("%d", &array[i].real);
        printf("Enter the imaginary number:");
        scanf("%d", &array[i].imaginary);
        display(array[i]);
    }
    
    return 0;
}