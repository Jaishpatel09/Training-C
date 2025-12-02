// check whether no is even od odd
#include<stdio.h>
int main(){
    int n,r;
    printf("Enter a num:");
    scanf("%d",&n);
    r=n%2;
    if(r==0){
        printf("The %d is a even number",n);
    }else{
        printf("The %d is a odd number",n); 
    }
    return 0;
}