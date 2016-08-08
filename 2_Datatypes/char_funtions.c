#include<stdio.h>
#include"charfunc.c"

void main()
{
    char x;
    printf("Enter any character: ");
    scanf("%c", &x);

    if(cisalpha(x))
    {
        if(cisupper(x))
            printf("Uppercase Alphabet");
        else
            printf("Lowercase Alphabet");
    }

    else if(cisdigit(x))
        printf("Number");

    else
        printf("Special symbol");

}
