//WAP to find greater number from given three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter a first value: ");
    scanf("%d",&a);
    printf("Enter b first value: ");
    scanf("%d",&b);
    printf("Enter c first value: ");
    scanf("%d",&c);
    if(a>b && a>c){
        printf("a is greater");
    } else if(b>c && b>a){
        printf("b is greater ");
    } else{
        printf("c is greater");
    }
    return 0;
}