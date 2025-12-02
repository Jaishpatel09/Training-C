//WAP to find sum from 1 to n using while statement
#include<stdio.h>
int main(){
    int sum=0,i=1,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    while (i<=n)
    {
        sum=sum+i;
        i++;
    }
    printf("sum=%d",sum);
    return 0;
    
}