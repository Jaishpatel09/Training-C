#include<stdio.h>
#include<string.h>
 struct employee
{
    int code;
    float salary;
    char name[30];
} ;
int main(){
    typedef struct employee Emp;
    Emp e1;
    Emp *ptr=&e1;
    e1.code = 78;
    e1.salary = 25000;
    strcpy(e1.name, "jaish");
    printf("%d\n%.2f \n%s",ptr->code,ptr->salary,ptr->name);
    return 0;
}

