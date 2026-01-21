#include<stdio.h>
void EvenOdd(int n){
    if (n%2==0)
    {
       printf("Even");
    }else{
        printf("Odd");
    }
    
}
int main(){
    int a;
    printf("Enter an number:");
    scanf("%d",&a);
    EvenOdd(a);
    return 0;
}