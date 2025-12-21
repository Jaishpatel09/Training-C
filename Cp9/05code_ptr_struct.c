#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main()
{
    struct employee e1;
    e1.code = 78;
    e1.salary = 25000;
    strcpy(e1.name, "jaish");
    struct employee *ptr;
    ptr = &e1;
    printf("%d %.2f %s ", ptr->code, (*ptr).salary, (*ptr).name); // ptr-> is  Exactly same  as (*ptr).
    return 0;
}