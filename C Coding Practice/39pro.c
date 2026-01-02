#include<stdio.h>
// #include<windows.h>

int main(){
    for (int i = 5; i >= 1; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    //Beep(750, 500); 
    
    return 0;
}
