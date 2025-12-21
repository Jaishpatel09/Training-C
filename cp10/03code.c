#include <stdio.h>

int main()
{
    FILE *fptr;
    fptr = fopen("jaish3.txt", "w");
    int num=540;
    fprintf(fptr, "%d", num);
  
    fclose(fptr);// to close the opened file
    return 0;
}