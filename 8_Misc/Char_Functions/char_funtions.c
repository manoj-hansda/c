#include <stdio.h>

int main()
{
    printf("Enter any character: ");
    char x = getchar();

    if( isalpha(x) )
    {
        if( isupper(x) )
            printf("Uppercase Alphabet");
        else
            printf("Lowercase Alphabet");
    }

    else if( isdigit(x) )
        printf("Number");

    else
        printf("Special symbol");

    getch();
    return 0;
}
