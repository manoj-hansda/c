// finds sum of digits in an integer (up to value )

#include <stdio.h>
#include <math.h>

int main()
{
    int num, tmp_num;
    int digits = 0, exp, rem, sum = 0;

    printf("Enter any no: ");
    scanf("%d", &num);

    tmp_num = num;
    while( tmp_num>0 )
    {
        digits++;
        tmp_num = tmp_num / 10;
    }

    exp = digits - 1;

    while( num>0 )
    {
        rem = num % 10;
        sum = sum + (rem * (int)(pow(10, exp)+0.5));
        exp--;
        num = num / 10;
    }

    printf("Reverse = %d", sum);

    getch();
    return 0;
}
