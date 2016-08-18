#include <stdio.h>

int main()
{
    int i;
    char name[3][30];

    for(i=0; i<3; i++)
        gets(name[i]);

    for(i=0; i<3; i++)
        puts(name[i]);
}
