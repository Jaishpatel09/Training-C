#include<stdio.h>

int main(){
    FILE *ptr;
    // ptr = fopen("jaish3.txt", "w");
    //fputc('c',ptr);
    ptr = fopen("jaish.txt", "r");
    char c=fgetc(ptr);
    printf("%c",c);
    return 0;
}