// WAP to print sum from 1 to 10 using while loop
#include<stdio.h>
int main(){
    int sum=0,i=1;
    while (i<=10)
    {
       sum=sum+i;
       i++;
    }
    printf("sum=%d",sum);
    
    return 0;
}