#include<stdio.h>
int sum(int,int);

int sum(int a,int b){
    a=55; // Sum function can not change x using a because copy of x is provided to sum in a
  return a+b;
}
int main(){
    int x=10, y=25;
    printf("The sum of 10 and 25 is %d\n",sum(x,y));
    printf("The value of y is %d",x);
    return 0;
}