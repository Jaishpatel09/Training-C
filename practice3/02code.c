#include <stdio.h>

int main() {
    float income, tax = 0;

    printf("Enter your annual income (in Lakhs): ");
    scanf("%f", &income);

    if (income <= 2.5)
        tax = 0;
    else if (income <= 5.0)
        tax = (income - 2.5) * 0.05;
    else if (income <= 10.0)
        tax = (2.5 * 0.05) + (income - 5.0) * 0.20;
    else
        tax = (2.5 * 0.05) + (5.0 * 0.20) + (income - 10.0) * 0.30;

    printf("Income Tax to be paid: %f Lakhs\n", tax);

    return 0;
}
