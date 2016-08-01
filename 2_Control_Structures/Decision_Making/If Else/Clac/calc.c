//  Title: Simple calculator using if-else.

#include<stdio.h>
#include<conio.h>
void main()
{
    int num1, num2, result, choice;
    printf("Enter 1st no: ");
    scanf("%d", &num1);
    printf("Enter 2nd no: ");
    scanf("%d", &num2);
    printf("\nChoose the operation to be performed: \n");
    printf("(1).Addition (2).Subtraction (3).Multiply (4).Divide \n");
    printf("Enter your option: ");
    scanf("%d", &choice);
    if(choice==1)
    {
        result=num1+num2;
        printf("\nSum = %d", result);
    }
    else if(choice==2)
    {
        result=num1-num2;
        printf("\nDifferecnce = %d", result);
    }

    else if(choice==3)
    {
        result=num1*num2;
        printf("\nProduct = %d", result);
    }

    else if(choice==4)
    {
        result=num1/num2;
        printf("\nQuotient = %d", result);

        if(num1%num2!=0)
        {
            result=num1%num2;
            printf(", Remainder = %d", result);
        }
    }
    getch();
}
