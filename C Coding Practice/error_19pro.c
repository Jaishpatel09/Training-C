//WAP to print table from 1 to n using while statement
#include<stdio.h>
int main(){
    int i=1,n;
    printf("Enter value of n:");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("%dX%d=%d\n",n,i,n*i);
        i++;
    }
    
}