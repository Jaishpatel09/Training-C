#include<stdio.h>
struct employee
{
    int code;
    float salary;
    char name[30];
};
int main(){
    struct employee facebook[100];
    facebook[0].code=546;
    facebook[1].code=78;
    facebook[2].code=10;
    printf("%d %d %d",facebook[0].code,facebook[1].code,facebook[2].code);
    return 0;
}