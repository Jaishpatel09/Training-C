#include<stdio.h>
 void main(){
    int arr[6]={1,-5,3,-4,5,7};
    int maxSum=arr[0];
    for (int i=0;i<6;i++){
        int currSum=0;
        for (int j=0;j<6;j++){
            currSum=currSum+arr[j];
        }
       if(currSum>maxSum){

       }
    }
    printf("%d",maxSum);
 }