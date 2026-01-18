#include<stdio.h>

int main(){
    int arr[]={44,85,5,46,12,48,98,23};

    int i=0;
    int j=7;
    while (i<j)
    {
        arr[i]=arr[i]+arr[j];
        arr[j]=arr[i]-arr[j];
        arr[i]=arr[i]-arr[j];

        i++;
        j--;
    }
    for (int i = 0; i < 8; i++)
    {
        printf(" %d",arr[i]);
    }
    
    return 0;
}