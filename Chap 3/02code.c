#include<stdio.h>
 int main(){
   int age=15;
   if(age>60){
    printf("You are senior citizen You can drive \n");
   } else if(age>25)
   {
    printf("You are elder You can drive \n");
   } else if(age<18){
    printf("You can not  drive \n");
   }
   return 0;
 }