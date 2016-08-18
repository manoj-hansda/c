#include <stdio.h>

int main()
{
    int num1, num2, result;
    char choice;

    printf("Enter 1st no: ");
    scanf("%d", &num1);
    printf("Enter 2nd no: ");
    scanf("%d", &num2);

    printf("\nChoose the operation to be performed: \n");
    printf("(1).Addition (2).Subtraction (3).Multiply (4).Divide \n");
    printf("Enter your option: ");
    scanf(" %c", &choice);

    switch(choice)
    {
        case '1':
            result = num1 + num2;
            printf("\nSum = %d", result);
            break;

        case '2':
            result = num1 - num2;
            printf("\nDifferecnce = %d", result);
            break;

        case '3':
            result = num1 * num2;
            printf("\nProduct = %d", result);
            break;

        case '4':
            result = num1 / num2;
            printf("\nQuotient = %d", result);

            if(num1 % num2 != 0)
            {
                result = num1 % num2;
                printf(", Remainder = %d", result);
            }
            break;

        default:
            printf("\nWrong Option!");
            break;
    }

    getch();
    return 0;
}
