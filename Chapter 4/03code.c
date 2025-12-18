// Print the numbers from 0 to n by using while loop
#include<stdio.h>
int main(){
    int i=0;
    int n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(i<n){
        printf("The value of i is: %d\n",i);
        i++;
    }

    return 0;
}