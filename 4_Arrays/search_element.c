#include<stdio.h>

void main()
{
    int arr[100], i, n, s, flag=0;

    printf("Enter no. of elements: ");
    scanf("%d", &n);

    printf("\nEnter %d elements:\n", n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("\nEnter the element to be searched: ");
    scanf("%d", &s);

    for(i=0; i<n; i++)
    {
        if(arr[i]==s)
        {
            printf("%d found on position[%d]", s, i);
            flag=1;
            break;
        }
    }

    if(flag==0)
        printf("Element not present");

    getch();
}
