#include<stdio.h>
int sum(int,int);
int sum(int a,int b){
  return a+b;
}
int main(){
    int a=10, b=25;
    printf("The sum of 10 and 25 is %d",(a,b));
    return 0;
}