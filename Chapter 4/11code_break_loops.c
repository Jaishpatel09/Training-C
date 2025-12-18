#include<stdio.h>
int main(){
    int n=15;
    for(int i=0;i<n;i++){
        if(i==7){
            break;// to exit the loop now

        }
        printf("i is %d \n",i);
    }

    return 0;
}