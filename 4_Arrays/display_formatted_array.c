#include<stdio.h>

void main()
{
    int arr[100], i, n;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nElements of array:\n", n);
    for(i=0; i<n; i++)
    {
        printf("arr[%d] = %d\n", i, arr[i]);
    }

    getch();
}
