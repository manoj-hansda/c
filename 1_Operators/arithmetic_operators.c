#include <stdio.h>

int main()
{
    int a, b, sum, sub, mul, div, rem;

    printf("Enter 1st no: ");
    scanf("%d", &a);
    printf("Enter 2nd no: ");
    scanf("%d", &b);

    sum = a + b;
    sub = a - b;
    mul = a * b;
    div = a / b;
    rem = a % b;            // modulus operator (%) is used to obtain remainder

    printf("Sum = %d \n", sum);
    printf("Difference = %d \n", sub);
    printf("Product = %d \n", mul);
    printf("Quotient = %d \n", div);
    printf("Remainder = %d \n", rem);

    getch();
}
