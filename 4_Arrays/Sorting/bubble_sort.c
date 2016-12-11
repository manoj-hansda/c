#include <stdio.h>

int main()
{
    int size, i, j;

    printf("Enter length of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    int temp;

    for(j=0; j<size; j++)
    {
        for(i=0; i<size-1; i++)
        {
            if(arr[i] >= arr[i+1])
            {
                temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;
            }
        }
    }

    printf("Sorted array (ascending):\n");
    for(i=0; i<size; i++)
        printf("%d\n", arr[i]);

    return 0;
}
