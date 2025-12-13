// Calculation using switch case
#include <stdio.h>
int main()
{
    int op;
    float a, b, result;
    printf("Press 0 for add\n Press 1 for sub\n Press 2 for multi\n Press 3 div\n");
    scanf("%d", &op);
    printf("Enter value of a :");
    scanf("%f", &a);
    printf("Enter value of b :");
    scanf("%f", &b);
    switch (op)
    {
    case 0:
        result = a + b;
        printf("The sum of a and b is: %.2f", result);
        break;
    case 1:
        result = a - b;
        printf("The sum of a and b is: %.2f", result);

        break;
    case 2:
        result = a * b;
        printf("The sum of a and b is: %.2f", result);

        break;
    case 3:
        result = a / b;
        printf("The sum of a and b is: %.2f", result);

        break;
    default:
        printf("Invalid case");
    }
    return 0;
}