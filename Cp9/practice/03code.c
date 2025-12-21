#include <stdio.h>
typedef struct Emp
{
    int salary;
    float score;
} Employee;
int main()
{
    Employee e1;
    Employee *ptr = &e1;
    ptr->salary = 45000;
    ptr->score = 78;
    // (*ptr).salary=45000;
    // (*ptr).score=78;
    printf("The employee salary is %d and The employee score is %.2f\n", ptr->salary, ptr->score);
    return 0;
}