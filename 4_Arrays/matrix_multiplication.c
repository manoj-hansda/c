#include<stdio.h>

void main()
{
    int a[100][100], b[100][100], i, j, k, row1, col1, row2, col2, p;

    printf("For Matrix 'A':\n");
    printf("Enter the rows: ");
    scanf("%d", &row1);
    printf("Enter the columns: ");
    scanf("%d", &col1);

    printf("\nFor Matrix 'B':\n");
    printf("Enter the rows: ");
    scanf("%d", &row2);
    printf("Enter the columns: ");
    scanf("%d", &col2);

    if(col1!=row2)
    {
        printf("\nThe column of matrix 'A' must be equal to row of matrix 'B'\n");
        exit(0);
    }

    printf("\nEnter %d elements for Matrix 'A':\n", row1*col1);
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    printf("\nEnter %d elements for Matrix 'B':\n", row2*col2);
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            scanf("%d", &b[i][j]);
        }
    }

    printf("\nMatrix A X Matrix B (%d X %d) :\n\n", row1, col2);

    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            p = 0;
            for(k=0; k<row2; k++)
            {
                p = p + a[i][k]*b[k][j];
            }
            printf("%d\t", p);
        }
        printf("\n");
    }

    getch();
}
