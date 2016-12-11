#include <stdio.h>

void main()
{
    int size, i, val, found = 0, pos;

    printf("Enter length of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to be searched: ");
    scanf("%d", &val);

    int low = 0, high = size-1, mid;

    while(low <= high)
    {
        mid = (low+high)/2;

        if(arr[mid] == val)
        {
            found = 1;
            break;
        }
        else if(arr[mid] < val)
            low = mid + 1;
        else
            high = mid - 1;
    }

    if(found == 1)
        printf("Found at index %d.", mid);
    else
        printf("Not found.");
}
