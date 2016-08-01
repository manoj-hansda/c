#include<stdio.h>
#include<ctype.h>

void main()
{
    char x;
    printf("Enter any character: ");
    scanf("%c", &x);

    if(isalpha(x))
    {
        if(isupper(x))
            printf("Uppercase Alphabet");
        else
            printf("Lowercase Alphabet");
    }

    else if(isdigit(x))
        printf("Number");

    else
        printf("Special symbol");

}
