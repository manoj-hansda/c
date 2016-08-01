#include <stdio.h>

int main()
{
    FILE *fp;
    char fileName[50];

    printf("Enter name for file (with extension): ");
    gets(fileName);

    fp = fopen(fileName, "w");

    if(fp!=NULL) {
        printf("file opened succesfully.\n");

        char data[11]="hello world";
        fwrite(data, sizeof(char), 11, fp);

        fclose(fp);
        printf("\ndata added to file succesfully.\n");
    }
    else
        printf("unable to open file.\n");

    getch();
    return 0;
}
