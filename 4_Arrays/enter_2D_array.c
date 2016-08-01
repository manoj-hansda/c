#include<stdio.h>

void main()
{
    int arr[100][100], i, j, row, col;

    printf("Enter the rows: ");
    scanf("%d", &row);
    printf("Enter the columns: ");
    scanf("%d", &col);

    printf("\nEnter %d elements\n", row*col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    printf("\nMatrix (%d X %d):\n\n", row, col);
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= %d\t", i, j, arr[i][j]);
        }
        printf("\n\n");
    }
    getch();
}
