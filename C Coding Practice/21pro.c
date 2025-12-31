#include<stdio.h>

int main(){
    int n;
    printf("Enter a value: ");
    scanf("%d",&n);
    if (n<0)
    {
        printf("Number is Negative");
    }else{
        printf("Number is Positive");
    }
    
    return 0;
}