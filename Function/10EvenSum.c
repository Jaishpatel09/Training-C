#include<stdio.h> 
void EvenSum(int n)
{
    int sum=0;
    for (int i = 1; i <= n; i++){
        if (i%2==0)
        {
           sum+=i; //sum=sum=i;
        }
        
    }
    printf("Sum of all Even num is %d",sum);
}

int main(){
    int a;
    printf("Enter a num:");
    scanf("%d",&a);
    EvenSum(a);
    
    return 0;
}