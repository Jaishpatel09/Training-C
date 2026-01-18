#include<stdio.h>

int main(){
    int arr[]={32,65,98,78,45,12,25,58,14};
    int n=9;
    int rev[9];
     
    for (int i = 0; i < n; i++)
    {
       rev[i]=arr[n-1-i];
        
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ",rev[i]);
    }
     
    return 0;
}
    