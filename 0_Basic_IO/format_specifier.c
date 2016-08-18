/*  common format specifiers:
    (char %c), (int %d), (float %f)
*/

#include <stdio.h>

int main()
{
    char ch;
    int num;
    float val;

    ch = 'a';
    num = 15;
    val = 35.2;

    printf("%c, %d and %f", ch, num, val);

    getch();
}

