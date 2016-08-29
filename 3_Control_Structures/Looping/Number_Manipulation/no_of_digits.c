// finds number of digits in an integer (up to value )

#include <stdio.h>

int main()
{
    int num;
    int digits = 0;

    printf("Enter any no: ");
    scanf("%d", &num);

    while( num>0 )
    {
        digits++;
        num = num / 10;
    }

    printf("Number has %d digits.", digits);

    getch();
    return 0;
}
