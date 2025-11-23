#include<stdio.h>
int main(){
    int a,b,c,d;
    printf("Enter value of a: \n");
    scanf("%d",&a);
    printf("Enter value of b: \n");
    scanf("%d",&b);
    printf("Enter value of c: \n");
    scanf("%d",&c);
    printf("Enter value of d: \n");
    scanf("%d",&d);
    if(a>b && a>c && a>d){
        printf("The greater number is a= %d\n",a);
    }
    if(b>a && b>c && b>d){
        printf("The greater number is b= %d\n",b);
    }
    if(c>b && c>a && c>d){
        printf("The greater number is c= %d\n",c);
    }
    if(d>b && d>c && d>a){
        printf("The greater number is d= %d\n",d);
    }

    return 0;
}