#include<stdio.h>
void main()
{
    char name[100];
    fgets(name, 100, stdin);
    printf("%s", name);
}
