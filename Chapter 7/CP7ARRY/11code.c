//WAP to find minimum and maximum number in an array
#include<stdio.h>

int main(){
    int n;
    printf("Enter size of an array:");
    scanf("%d",&n);
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    int max=arr[0];
    int min=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }else if (min>arr[i])
        {
            min=arr[i];
        }
        
        
    }
    printf("Maximum is:%d\n",max);
    printf("Minimum is:%d",min);
    return 0;
}