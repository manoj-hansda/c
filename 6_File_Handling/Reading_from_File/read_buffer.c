#include <stdio.h>

int main()
{
    FILE *fp;
    //char fileName[50];
    //printf("Enter name of file (with extension): ");
    //gets(fileName);
    fp = fopen("abc.txt", "r");

    if(fp!=NULL) {
        char data[12];
        fread(data, sizeof(char), 11, fp);
        puts(data);
    }

    else {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    getch();
    return 0;
}
