#include<stdio.h>

void add(int x, int y);

void main()
{
    int a=10, b=20, c;
    add(a, b);
    printf("a=%d, b=%d\n", a,b);
}

void add(int x, int y)
{
    x=x+5;
    y=y+5;
    printf("x=%d, y=%d\n", x,y);
}
