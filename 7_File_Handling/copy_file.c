#include <stdio.h>

int main()
{
    FILE *fps, *fpd;
    fps = fopen("abc.txt", "r");

    if(fps == NULL)
    {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    else
    {
        fpd = fopen("xyz.txt", "w");

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
