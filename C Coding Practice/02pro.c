// Do calculation
#include<stdio.h>
int main(){
    float a,b,result;
    int op;
    printf("Enter 0 for add\n Enter 1 for sub\n Enter 2 for multi\n Enter 3 for div\n");
    scanf("%d",&op);
    printf("You entered %d\n",op);
    printf("Enter value of a:");
    scanf("%f",&a);
    printf("Enter value of b:");
    scanf("%f",&b);
    if(op==0){
        result=a+b;
        printf("The result is %.2f",result);
    } else if(op==1){
        result=a-b;
         printf("The result is %.2f",result);
    }  else if(op==2){
        result=a*b;
         printf("The result is %.2f",result);
    } else if(op==3){
        result=a/b;
         printf("The result is %.2f",result);
        }
    return 0;
    
}
    