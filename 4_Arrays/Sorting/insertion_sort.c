#include <stdio.h>

int main()
{
    int i, j, size, temp, pos;

    printf("Enter length of array: ");
    scanf("%d", &size);

    int arr[size];

    printf("Enter %d elements:\n", size);
    for(i=0; i<size; i++)
        scanf("%d", &arr[i]);

    for(i=0; i<(size-1); i++)
    {
        pos = i;

        while(pos>0 && arr[pos] < arr[pos-1])
        {
            temp = arr[pos];
            arr[pos] = arr[pos-1];
            arr[pos-1] = temp;
            pos--;
        }
    }

    printf("Sorted array (ascending):\n");
    for(i=0; i<size; i++)
        printf("%d\n", arr[i]);

    return 0;
}
