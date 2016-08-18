#include<stdio.h>
#include<stdlib.h>

int i=1;

void main()
{
    printf("%d\n", i);
    i++;
    if(i<=100)
        main();
    else
        exit(0);
}
