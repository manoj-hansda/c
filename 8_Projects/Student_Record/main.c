#include <stdio.h>
#include "functions.h"

int main()
{
    puts("\t STUDENT'S DETAIL BOOK");
    printf("----------------------");
    printf("----------------------\n");

    int option = viewMenu();
    int count = 0;
    char cont;

    switch (option)
    {
        case 1:
            do
            {
                getDetails();
                writeFile();
                count++;
                printf("continue adding? (press 'y'): ");
                cont = getchar();
                cont = getchar();
            } while(cont == 'y' || cont == 'Y');

            printf("\n%d record(s) added succesfully\n", count);
            break;

        case 2:
            readFile();
            break;

        default:
            break;
    }

    getch();
    return 0;
}
