#include<stdio.h>

void main()
{
    int i, j;
    while(1)
    {
        for(i=1; i<=100; i++)
        {
            for(j=1; j<=i; j++)
            {
                printf(" ");
            }
                printf("***\n");
        }
        for(i=1; i<=100; i++)
        {
            for(j=1; j<=100-i; j++)
            {
                printf(" ");
            }
                printf("***\n");
        }
    }
}
