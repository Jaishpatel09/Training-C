#include<stdio.h>

int main(){
    int arr[]={32,65,98,78,45,12,25,58,14,47,36,69};
    int n=12;

    for (int i = 0; i < n; i++)
    {
       for (int j = n-1; j >= 0; j--)
       {
         if (i<j)
         {
           int temp=arr[i];
           arr[i]=arr[j];
           arr[j]=temp;
         }
         
       }
       
    }
    for (int k = 0; k <12 ; k++)
    {
        printf("%d ",arr[k]);
        
    }
    
    return 0;
}