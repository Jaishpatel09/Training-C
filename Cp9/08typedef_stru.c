#include<stdio.h>
#include<string.h>
typedef struct employee
{
    int code;
    float salary;
    char name[30];
} Emp;
int main(){
    Emp e1;
    e1.code = 78;
    e1.salary = 25000;
    strcpy(e1.name, "jaish");
    printf("%d\n%.2f \n%s",e1.code,e1.salary,e1.name);
    return 0;
}

