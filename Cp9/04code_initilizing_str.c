#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee jaish={79,5400,"Jaish"};
    printf("%d %.2f %s",jaish.code,jaish.salary,jaish.name);
    return 0;
}