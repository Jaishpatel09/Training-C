//To find greatest numbers from three numbers
#include<stdio.h>
int main(){
    int a,b,c;
    int result;
    printf("Enter three numbers:");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        result=0;
    }else if(b>a && b>c){
        result=1;
    } else{
        result=3;
    }
    switch(result){
        case 0:
        printf("The greater no is %d\n",a);
        break;
        case 1:
        printf("The greater no is %d\n",b);
        break;
        case 2:
        printf("The greater no is %d\n",c);
        break;
        default:
        printf("Error");
    }
    return 0;
}