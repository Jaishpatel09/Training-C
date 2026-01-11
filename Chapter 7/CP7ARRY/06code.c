#include<stdio.h>

int main(){
    int n;
    printf("Enter size of Array:");
    scanf("%d",&n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d",&a[i]);
    }
    int max=a[0];
    for (int j = 0; j <n ; j++)
    {
       if (a[j]>max)
       {
        max=a[j];
       }
       
    }
    printf("Maximum = %d",max);
    
    return 0;
}