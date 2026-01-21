#include<stdio.h>
void Even(int n){
    for (int i = 1; i <= n; i++)
    {
        if (i%2==0)
        {
            printf("%d ",i);
        }
        
    }
    
}
int main(){
    int a;
    printf("Enter a num:");
    scanf("%d",&a);
    Even(a);
    return 0;
}