#include<stdio.h>
float force(float);
float force(float mass){
    return mass*9.8;
}
int main(){
int m;
printf("Enter value of m: ");
scanf("%d",&m);
printf("The value of force is %.2f\n",force(m));
return 0;
}