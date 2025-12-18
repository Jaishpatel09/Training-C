#include<stdio.h>
int sum(int*,int*);

int sum(int* a,int* b){
    *a=55; 
  return (*a+*b);
}
int main(){
    int x=10, y=25;
    printf("The sum of 10 and 25 is %d\n",sum(&x,&y));
    printf("The value of y is %d",x);
    return 0;
}