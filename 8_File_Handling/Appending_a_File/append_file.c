#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    printf("Enter name of file (with extension): ");
    gets(fileName);
    fp = fopen(fileName, "a");

    if(fp == NULL)
        printf("unable to open file.\n");

    else
    {
        char data[100];
        printf("Enter data: ");
        gets(data);
        fputs(data, fp);
        printf("data added sucessfully.");
        fclose(fp);
    }

    getch();
    return 0;
}
