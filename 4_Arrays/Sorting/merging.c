#include <stdio.h>

void main()
{
    int n1, n2, i, j, k;
    printf("Enter length of array A: ");
    scanf("%d", &n1);
    int a[n1];

    printf("Enter %d elements:\n", n1);
    for(i=0; i<n1; i++)
        scanf("%d", &a[i]);

    printf("Enter length of array B: ");
    scanf("%d", &n2);
    int b[n2];

    printf("Enter %d elements:\n", n1);
    for(i=0; i<n2; i++)
        scanf("%d", &b[i]);

    int c[n1+n2];

    for(i=0, j=0, k=0 ; k<n1+n2 ; k++)
    {
        if(i < n1 && j < n2)
        {
            if(a[i] <= b[j])
            {
                c[k] = a[i];
                i++;
            }
            else
            {
                c[k] = b[j];
                j++;
            }
        }
        else if(i == n1)
        {
            c[k] = b[j];
            j++;
        }
        else if(j == n2)
        {
            c[k] = a[i];
            i++;
        }
    }

    printf("Merged array:\n");
    for(i=0; i<n1+n2; i++)
        printf("%d\n", c[i]);
}
