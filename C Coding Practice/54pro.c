// WAP to print sum of an Array
#include<stdio.h>

int main(){
    int n;
    printf("Enter size of an Array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0;
    for (int j = 0; j < n; j++)
    {
       sum=sum+arr[j]; 
    }
    printf("The sum of the array is:%d",sum);
    
    return 0;
}