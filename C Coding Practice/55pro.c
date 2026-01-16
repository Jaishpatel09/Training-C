// WAP to find Max Number of an Array
#include<stdio.h>

int main(){
    int n;
    printf("Enter the size of an Array:");
    scanf("%d",&n);

    int arr[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }

    int max=arr[0];
    for (int i = 0; i < n; i++)
    {
        if (max<arr[i])
        {
            max=arr[i];
        }
        
    }
    printf("Max no of the array is %d",max);
     
    return 0;
}