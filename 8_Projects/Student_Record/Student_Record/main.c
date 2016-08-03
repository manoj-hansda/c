#include <stdio.h>
#include <stdlib.h>
#include "functions.h"

struct student
{
    int id;
    char name[30];
    float marks;
} s ;

int main()
{
    puts("STUDENT'S DETAIL BOOK");
    puts("----------------------");

    char cont;
    do
    {
        getDetails(&s);
        //writeFile(s);
        printf("continue adding ? (press 'y'): ");
        cont = getchar();
        cont = getchar();
    } while(cont == 'y' || cont == 'Y');

    return 0;
}
