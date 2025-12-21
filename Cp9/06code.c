#include <stdio.h>
#include <string.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
void show(struct employee e);
void show(struct employee e)
{
    printf("code is %d\nsalary is %.2f\nname is %s\n", e.code, e.salary, e.name);
}
int main()
{
    struct employee e1;
    e1.code = 78;
    e1.salary = 25000;
    strcpy(e1.name, "jaish");
    show(e1);
    return 0;
}