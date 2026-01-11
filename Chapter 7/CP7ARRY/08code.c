#include<stdio.h>

int main(){
     int arr[]={5,12,24,15,8,7,6};
     int size=7;
     int key;
     int found=0;
     printf("Enter an element to Search:");
     scanf("%d",&key);

     for (int i = 0; i < size; i++)
     {
        if (arr[i]==key)
        {
            found=1;
            break;
        }
        
     }
     if (found==1)
     {
        printf("Element Found");
     }else{
         printf("Element Not Found");
     }
     
     
    return 0;
}