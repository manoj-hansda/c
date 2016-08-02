#include <stdio.h>
#include <string.h>

int main()
{
    FILE *fp;
    char fileName[50];

    printf("Enter name for file (with extension): ");
    gets(fileName);

    fp = fopen(fileName, "w");

    if(fp!=NULL) {
        printf("file opened succesfully.\n");

        int i,j=100;
        char data[100][100];

        for(i=0; i<3; i++)
        {
            gets(data[i]);
            fwrite(data[i], sizeof(char), strlen(data[i]), fp);
        }


        fclose(fp);
        printf("\ndata added to file succesfully.\n");

        fp = fopen(fileName, "r");

        for(i=0; i<3; i++)
        {
            fread(data[i], sizeof(char), strlen(data[i]), fp);
            puts(data[i]);
        }
    }
    else
        printf("unable to open file.\n");

    getch();
    return 0;
}
