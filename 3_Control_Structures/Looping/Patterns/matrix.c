#include<stdio.h>

void main()
{
    int i, j, r, c;
    printf("Number of rows: ");
    scanf("%d", &r);
    printf("Number of columns: ");
    scanf("%d", &c);

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=c; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
    getch();
}
