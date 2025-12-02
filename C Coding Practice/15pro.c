// WAP a to print odd number from 1 to n
#include<stdio.h>
int main(){
    int n,i=1;
    printf("Enter value of n:");
    scanf("%d",&n);
    while (i<=n)
    {
        if(i%2!=0){
            printf("%d\n",i);
        }
        i++;
    }
    return 0;
}