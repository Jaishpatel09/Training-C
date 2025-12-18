// To find greater from given 5 different numbers
#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("Enter 5 integers: ");
    scanf("%d %d %d %d %d",&a,&b,&c,&d,&e);
    if(a>b && a>c && a>d && a>e){
        printf("%d is a greater no",a);
    } else if(b>a && b>c && b>d && b>e){
        printf("%d is a greater no",b);
    }else if(c>b && c>a && c>d && c>e){
        printf("%d is a greater no",c);
    }else if(d>b && d>c && d>a && d>e){
        printf("%d is a greater no",d);
    }else if(e>b && e>c && e>d && e>a){
        printf("%d is a greater no",a);
    }
    return 0;
}