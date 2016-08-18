/*  scanf is used to scan(input) information from input device (generally keyboard)
    syntax:
            scanf("format specifications", &variable1, &variable2, ... );
*/

#include <stdio.h>

int main()
{
    int a;

    scanf("%d", &a);            // variable is prefixed by &(ampersand) operator

    printf("value is %d", a);

    getch();
}
