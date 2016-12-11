#include<stdio.h>
#include<stdlib.h>

void multiply(int r1, int c1, int *a, int b[100][100], int r2, int c2)
{
     int i, j, k, p;
      printf("\nEnter %d elements for Matrix 'A':\n", r1*c1);
    for(i=0; i<r1; i++)
    {
        for(j=0; j<c1; j++)
        {
            printf("%d ", a[i][j]);
        }
    }

    printf("\nEnter %d elements for Matrix 'B':\n", r2*c2);
    for(i=0; i<r2; i++)
    {
        for(j=0; j<c2; j++)
        {
            printf("%d ", b[i][j]);
        }
    }
        printf("\nMatrix A X Matrix B (%d X %d) :\n\n", r1, c2);

    for(i=0; i<r1; i++)
    {
        for(j=0; j<c2; j++)
        {
            p = 0;
            for(k=0; k<r2; k++)
            {
                p = p + a[i][k]*b[k][j];
            }
            printf("%d\t", p);
        }
        printf("\n");
    }
}

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



    multiply(row1, col1, a, b, row2, col2);

    getch();
}
