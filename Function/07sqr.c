#include<stdio.h>
int square(int a){
    return a*a;
}
int main(){
    int n;
    printf("Enter an number:");
    scanf("%d",&n);
   
    printf("Square = %d",square(n));
    return 0;
}