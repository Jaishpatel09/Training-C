// Find the largest numbers from the give numbers
#include <stdio.h>
 int main(){
    int a,b;
    printf("Enter the  value of a: ");
    scanf("%d",&a);
    printf("Enter the  value of b: ");
    scanf("%d",&b);
    if(a>b){
        printf("a is a greater number\n",a);
    } if(a<b) {
        printf("b is greater number\n ",b);
    }  if(a==b){
        printf("a and b both are equal\n");
    }
  return 0;
}