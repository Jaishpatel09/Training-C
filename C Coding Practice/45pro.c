#include<stdio.h>
int num=1;
int main(){
    for (int i = 1; i <= 5; i++)
    {
        for (int j = 1; j <=i ; j++)
        {
            printf("%d ",num);
            num++;
        }
        printf("\n");
        
    }
    
    return 0;
}





