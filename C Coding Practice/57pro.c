// WAP to search an from an array
#include<stdio.h>

int main(){
    int arr[]={5,7,9,3,4,2,6};
    int found=0;
    int key;
    printf("Enter a num to search:");
    scanf("%d",&key);
    for (int i = 0; i < 7; i++)
    {
      if (arr[i]==key)
      {
        found=1;
        break;
      }
      
    }
    if (found==1)
    {
        printf("Found");
    }else{
        printf("Not Found");
    }
    
   
    return 0;
}