#include<stdio.h>

void main()
{
    int i, n;
    printf("Number of stars: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
        printf("* ");
    }
    getch();
}
