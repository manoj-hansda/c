#include<stdio.h>
#include<string.h>

void main()
{
    char a[]="Hello World";
    char b[]="Welcome";

    strcat(a, b);
    printf("%s\n", a);
}
