#include <stdio.h>
int main()
{
    char i='A';
    char* j=&i;

    // j is a pointer pointing  i (J is an char pointer)
    // j is a pointer which is store the value of i

   printf("The value of i is %u",j);
    return 0;
}