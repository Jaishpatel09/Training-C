// To check whether no is positive or negative
#include<stdio.h>
int main(){
    int n;
    printf("Enter a num:");
    scanf("%d",&n);
    if(n<0){
        printf("%d is a negative number",n);
    } else{
        printf("%d is a positive number",n);
    }
    return 0;
}
