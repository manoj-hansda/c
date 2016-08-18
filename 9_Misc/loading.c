#include <stdio.h>
#include <windows.h>

int main()
{
    int i;

    for(i=1; i<100; i++)
    {
        printf("-");
        Sleep(100);
    }

    printf("\ncompleted");
}
