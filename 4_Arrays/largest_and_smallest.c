#include<stdio.h>

void main()
{
    int arr[100], i, n, largest, smallest;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    largest = arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]>=largest)
            largest=arr[i];
    }

    smallest = arr[0];
    for(i=0; i<n; i++)
    {
        if(arr[i]<=smallest)
            smallest=arr[i];
    }

    printf("\nlargest element is %d", largest);
    printf("\nsmallest element is %d", smallest);

    getch();
}
