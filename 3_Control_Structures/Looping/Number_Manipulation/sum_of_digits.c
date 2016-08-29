// finds sum of digits in an integer (up to value )

#include <stdio.h>
#include <math.h>

int main()
{
    int num;
    int rem, sum = 0;

    printf("Enter any no: ");
    scanf("%d", &num);

    while( num>0 )
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }

    printf("Sum of digits = %d", sum);

    getch();
    return 0;
}
