#include<stdio.h>

void upto_range(int);
void upto_terms(int);

main()
{
    int l, t, choice;
    printf("Select option (1 or 2): \n");
    printf("(1).Range   (2).No of terms: ");
    scanf("%d", &choice);
    switch(choice)
    {
    case 1:
        printf("\nEnter the limit: ");
        scanf("%d", &l);
        upto_range(l);
        break;
    case 2:
        printf("\nEnter no. of terms: ");
        scanf("%d", &t);
        upto_terms(t);
        break;
    }
    printf("\n");
}

void upto_range(int limit)
{
    int i=1, j=2, k=0;
    printf("\nFibonacci Series upto %d:\n",limit);
    printf("%d %d ", i,j);
    while(k<=limit)
    {
        k=i+j;
        if(k<=limit)
            printf("%d ", k);
        i=j;
        j=k;
    }
}

void upto_terms(int terms)
{
    int i=1, j=2, k=0;
    printf("\nFibonacci Series upto %d terms:\n", terms);
    printf("%d %d ", i,j);
    terms=terms-2;
    while(terms--)
    {
        k=i+j;
        printf("%d ", k);
        i=j;
        j=k;
    }
}
