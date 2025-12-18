//To find largest no from give numbers
#include<stdio.h>
int main(){
    int a,b;
    printf("Enter first no:");
    scanf("%d",&a);
    printf("Enter second no:");
    scanf("%d",&b);
    if(a>b){
        printf("%d is a greater no",a);
    } else if(b>a)
    {
        printf("%d is greater no",b);
    }else{
        printf("Both are equal");
    }
    return 0;
}