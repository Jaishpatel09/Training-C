#include<stdio.h>
 int main (){
    int n=5;
    for(int i=1;i<=4;i++){
        for(int j=0;j<=4;j++){
            if(i==j || j==(4-i )){
            printf("*");
            }else{
                printf(" ");
            }
           
        }
    }
 }