#include<stdio.h>
float cel2fah(float c);
float cel2fah(float c){
    return ((9*c)/5)+32.0;
}
int main(){
    float c;
    printf("Enter Celcius :");
    scanf("%f",&c);
    printf("Celcius to fahrenheit is %.2f is %.2f",c,cel2fah(c));
    return 0; 
}
