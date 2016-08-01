//  Title: Simple calculator using if-else.

#include<stdio.h>
#include<conio.h>
#include "func.c"

int sum(int, int);
int sub(int, int);
int mul(int, int);
int div(int, int);

void main()
{z
    int num1, num2, result;
    char choice, cont;
    do
    {
        system ("cls");
        printf("Enter 1st no: ");
        scanf("%d", &num1);
        printf("Enter 2nd no: ");
        scanf("%d", &num2);
        printf("\nChoose the operation to be performed: \n");
        printf("(1).Addition (2).Subtraction (3).Multiply (4).Divide \n");
        printf("Enter your option: ");
        scanf(" %c", &choice);
        switch (choice)
        {
            case '1':
                result = add(num1, num2);
                printf("\nSum = %d", result);
                break;

            case '2':
                result = sub(num1, num2);
                printf("\nDifferecnce = %d", result);
                break;

            case '3':
                result = mul(num1, num2);
                printf("\nProduct = %d", result);
                break;

            case '4':
                result = div(num1, num2);
                printf("Quotient = %d", result);
                break;

            default:
            printf("\nInvalid Option!");
            break;
        }
        printf("\nDo you want to continue (Y): ");
        scanf(" %c", &cont);
    } while(cont=='Y' || cont=='y');
}
