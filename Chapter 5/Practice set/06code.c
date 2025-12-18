#include<stdio.h>
int sum_natural(int);
int sum_natural(int n){
if(n==1){
    return 1;
}
//1,2,3,4,5,6,7,8,....+(n-1)+n;
// sum_natural(n)=sum_natural(n-1)+n;
return sum_natural(n-1)+n;
}
int main(){
    int n=5;
    printf("The sum of natural numbers is %d",sum_natural(n));
    return 0;
}