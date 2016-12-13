#include <stdio.h>

void sort(int *x);
void merge(int *x, int *y);

void main()
{
    int n1, n2, n3;
    int i, j, k;

    printf("Enter length of array A: ");
    scanf("%d", &n1);
    int a[n1];

    printf("Enter %d elements:\n", n1);
    for(i=0; i<n1; i++)
        scanf("%d", &a[i]);

    printf("Enter length of array B: ");
    scanf("%d", &n2);
    int b[n2];

    printf("Enter %d elements:\n", n2);
    for(i=0; i<n2; i++)
        scanf("%d", &b[i]);

    int c[n1+n2];

    int small = (n1<n2)? n1 : n2;
    int diff = (n1<n2)? n2-n1 : n1-n2;

    for(i=0, j=0, k=0; i<small; k++)
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

    for(i=0; i<=diff; i++)
    {
        c[k] = b[j];
        k++;
        j++;
    }

    printf("Merged array A and B:\n");
    for(i=0; i<n1+n2; i++)
        printf("%d ", c[i]);
}
