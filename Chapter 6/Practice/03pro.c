#include <stdio.h>
void change_to_thirty_times(int *);
void change_to_thirty_times(int *a)
{
    *a = *a * 30;
}
int main()
{
    int z = 5;
    printf("The value of z is %d\n", z);
    change_to_thirty_times(&z); // &z for to assume value of to value of z
    printf("The value of z is %d\n", z);
    return 0;
}