#include <stdio.h>
#include <string.h>
typedef struct bankAcc
{
    int accNo;
    char name[30];
    char IFSC[12];
    float Balance;
} bk;
int main()
{
    bk e1;
    e1.accNo = 4146258;
    strcpy(e1.name, "Jaish Patel");
    strcpy(e1.IFSC, "SBIN0003710");
    e1.Balance = 47000;
    printf("Dear %s\nYour Bank Account no is:- %d\nYour IFSC is:- %s\nYour Account Balance is:- %.2f", e1.name, e1.accNo, e1.IFSC, e1.Balance);
    return 0;
}