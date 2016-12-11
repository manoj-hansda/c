#include <stdio.h>

void print2dString(char *l, int s)
{
    int i;

    printf("\nList of strings:\n\n");

    for(i=0; i<s; i++)
    {
       printf("%s\n", l);
       l = l + 100;
    }
}

int main()
{
    int i, size;

    printf("Enter number of strings: ");
    scanf("%d", &size);

    char line[size][100];
    printf("Enter %d strings:\n", size);

    getchar();
    for(i=0; i<size; i++)
        gets(line[i]);

    print2dString(line, size);
}
