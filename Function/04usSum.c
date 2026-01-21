#include<stdio.h>

void add(){
    int a,b;
    printf("Enter two num: ");
    scanf("%d %d",&a,&b);

    printf("sum=%d",a+b);
    
}

int main(){
    add();
    return 0;
}