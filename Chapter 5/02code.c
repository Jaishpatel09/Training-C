#include <stdio.h>
void good_morning();
void good_afternoon();// Function prototype
void good_evening();

void good_morning()   //Function definition
{
    printf("good morning\n");
}
void good_afternoon()
{
    printf("good afternoon\n");
}
void good_evening()
{
    printf("good evening \n");
}
int main()
{ 
 good_morning();
 good_afternoon();   // Function call
 good_evening();
 return 0;
}
