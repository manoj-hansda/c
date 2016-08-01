#include<stdio.h>

void main()
{
    int a[100][100], b[100][100], i, j, row, col;

    printf("Enter the rows: ");
    scanf("%d", &row);
    printf("Enter the columns: ");
    scanf("%d", &col);

    printf("\nEnter %d elements for Matrix 'A':\n", row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nNow enter %d elements for Matrix 'B':\n", row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMatrix A + Matrix B :\n\n", row, col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("(%d+%d) = %d\t", a[i][j], b[i][j], a[i][j]+b[i][j]);
        }
        printf("\n\n");
    }

    getch();
}
