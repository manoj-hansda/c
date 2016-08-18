#include <stdio.h>

int main(int argc, char** argv)
{
    FILE *fps, *fpd;
    fps = fopen(argv[1], "r");

    if(fps == NULL)
    {
        printf("unable to open file.\n");
        printf("Please make sure that the file exists.");
    }

    else
    {
        fpd = fopen(argv[2], "w");

        char ch;
        while((ch=fgetc(fps))!=EOF)
        {
            fputc(ch, fpd);
        }
         fclose(fpd);

         printf("copied suceesfully.\n");
    }

    fclose(fps);

    return 0;
}
