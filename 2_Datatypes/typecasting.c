#include <stdio.h>

int main()
{
    int i = 3;
    float f = 4.5;

    printf("Before type casting:\n");
    printf("i = %d\n", i);
    printf("f = %f\n", f);

    printf("After type casting:\n");
    printf("i = %f\n", (float)i);
    printf("f = %d\n", (int)f);

    getch();
    return 0;
}
