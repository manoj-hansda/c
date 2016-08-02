#include <stdio.h>

int main()
{
    FILE *fps, *fpd;
    char sourceFile[50], destFile[50];
    printf("Enter name of 'source' file (with extension): ");
    gets(sourceFile);

    fps = fopen(sourceFile, "r");

    if(fps == NULL)
    {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    else
    {
         printf("Enter name of 'destination' file (with extension): ");
        gets(destFile);
        fpd = fopen(destFile, "w");

        char ch;
        while((ch=fgetc(fps))!=EOF)
        {
            fputc(ch, fpd);
        }
         fclose(fpd);

         printf("copied suceesfully.\n");
    }

    fclose(fps);

    getch();
    return 0;
}
