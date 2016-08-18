#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter 1st no: ");
    scanf("%d", &a);
    printf("Enter 2nd no: ");
    scanf("%d", &b);

    if( a > b )
        printf("%d is greater than %d \n", a, b);

    if( a < b )
        printf("%d is less than %d \n", a, b);

    if( a >= b )
        printf("%d is greater than or equal to %d \n", a, b);

    if( a <= b )
        printf("%d is less than or equal to %d \n", a, b);

    if( a == b )
        printf("%d is equal to %d \n", a, b);

    if( a != b )
        printf("%d is not equal to %d \n", a, b);

    getch();
}
