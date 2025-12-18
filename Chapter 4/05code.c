#include<stdio.h>
int main(){
    int i=15;
    printf("The value of i is : %d \n",i);
    i=i+10;
    // i++ : i is increase by 1
    // i-- : i is decrease by 1
    printf("The value of i is : %d \n",i);
    printf("The value of i is : %d\n ",++i);
    printf("The value of i is : %d\n ",i++);
    // i++ print i first then increment i (Post increment operater)
    // ++i increment i first then print i (Post increment operater)
    return 0;
}