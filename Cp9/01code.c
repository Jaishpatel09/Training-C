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
    struct employee e1, e2;
    e1.code = 799;
    e1.salary = 55.21;
    
    strcpy(e1.name, "Jaish");
    
    printf("%d %f %s", e1.code, e1.salary, e1.name);
    return 0;
}