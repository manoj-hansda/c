
#include<stdio.h>

void main()
{
    int arr[100], i, j, n, temp;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    for(j=0; j<n; j++)
    {
        for(i=0; i<n-1; i++)
        {
            if(arr[i+1]<=arr[i])
            {
                temp=arr[i];
                arr[i]=arr[i+1];
                arr[i+1]=temp;
            }
        }
    }

    printf("\nElements sorted in ascending order:\n");

    for(i=0; i<n; i++)
    {
        printf("%d\n", arr[i]);
    }

    getch();
}
