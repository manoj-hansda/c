#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];
    printf("Enter name of file (with extension): ");
    gets(fileName);
    fp = fopen(fileName, "r");

    if(fp!=NULL) {
        char ch;
        while((ch=fgetc(fp))!=EOF) {
            putchar(ch);
        }
    }

    else {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    getch();
    return 0;
}
