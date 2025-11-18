#include <stdio.h>
 int main(){
    int n,r;
    printf("Enter a num :");
    scanf("%d",&n);
    r=n%2;
    if(r==0){
        printf("%d is a even number ",n);
    } else {
        printf("%d is a odd number ",n );
    }
  return 0;
}