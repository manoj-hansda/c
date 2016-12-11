#include <stdio.h>

void print2dArray(int *a, int r, int c)
{
    int i, j;

    printf("Matrix:\n");

    for(i=0; i<r; i++)
    {
        for(j=0; j<c; j++)
            printf("%d ", *(a++));

        printf("\n");
    }
}

int main()
{
    int i, j, row, col;

    printf("Enter rows: ");
    scanf("%d", &row);
    printf("Enter cols: ");
    scanf("%d", &col);

    int arr[row][col];
    printf("Enter %d elements:\n", row*col);

    for(i=0; i<row; i++)
        for(j=0; j<col; j++)
            scanf("%d", &arr[i][j]);

    print2dArray(arr, row, col);
}
