#include<stdio.h>

void repeat();
int i=0;

void main()
{
    repeat();
}

void repeat()
{
    printf("%d\n", i);
    i++;
    if(i<=100)
        repeat();
    else
        return;
}
