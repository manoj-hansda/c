#include<stdio.h>

void main()
{
    int arr[100], i, size, sum=0;
    printf("Enter number of elements: ");
    scanf("%d", &size);

    printf("\nEnter %d numbers:\n", size);
    for(i=0; i<size; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(i=0; i<size; i++)
    {
        sum = sum + arr[i];
    }

    printf("\nSum = %d", sum);
    printf("\nAverage = %d", (sum/size));

    getch();
}
