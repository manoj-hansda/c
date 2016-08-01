#include<stdio.h>

void main()
{
    int i, j;

    for(i=1; i<=10; i++)
    {
        for(j=1; j<=20-i*2; j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
