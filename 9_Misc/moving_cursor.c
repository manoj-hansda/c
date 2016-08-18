#include<windows.h>
#include <stdio.h>

COORD position={0,0};

void setCursor(int x,int y)
{
    position.X=x;
    position.Y=y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), position);
}

//ANSI compatible terminal (Linux)
void setCursor2(int x, int y)
{
 printf("\033[%d;%dH", y+1, x+1);
}

int main()
{
    setCursor(10,10);

    //uncomment below for ANSI compatible terminal
    //setCursor(5, 5);

    printf("Hello world\n");

    getch();
    return 0;
}
